#!/bin/bash

echo Compiling: main.cpp
g++ -c main.cpp -o ./obj/main.o

cd cpp
for file in ./*; do
  file_name=$(basename $file)
  echo Compiling: $file_name
  g++ -c $file_name -o ../obj/${file_name%.*}.o
done

cd ../obj
echo Linking object files
g++ * -o ../program

rm *
cd ..

echo Building finished: $PWD/program
