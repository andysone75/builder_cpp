#include "../h/userHandler.h"
#include <iostream>
using namespace std;

UserHandler::UserHandler(User* user) {
  m_user = user;
}

UserHandler::~UserHandler() {
  delete m_user;
}

string* UserHandler::request(const string& input) {
  if (input == "stats")
    return new string("You have: " + to_string(m_user->getMoney()) + "$");
  else if (input == "add") {
    int amount;
    cout << "Amount: ";
    cin >> amount;
    m_user->addMoney(amount);
    return new string("+" + to_string(amount) + "$");
  }
  else if (input == "exit")
    return new string("GoodBye");
  else
    return new string("Unknown command");
}
