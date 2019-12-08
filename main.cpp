#include <iostream>
#include "h/user.h"
#include "h/userHandler.h"
using namespace std;

int main(int argc, char const *argv[]) {
  User* user = new User(1000);
  UserHandler* userHandler = new UserHandler(user);

  string input;

  while (input != "exit") {
    cout << ">";
    cin >> input;
    string* output = userHandler->request(input);
    cout << *output << endl;
    delete output;
  }

  return 0;
}
