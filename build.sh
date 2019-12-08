#!/bin/bash

echo Compiling: main.cpp
g++ -c main.cpp -o ./obj/main.o

cd cpp
IFS=" "
if [ $(find * -maxdepth 0 -type f 2> /dev/null) ]; then
  for file in ./*; do
    file_name=$(basename $file)
    echo Compiling: $file_name
    g++ -c $file_name -o ../obj/${file_name%.*}.o
  done
fi

cd ../obj
echo Linking object files
g++ * -o ../program

rm *
cd ..

echo Building finished: $PWD/program
