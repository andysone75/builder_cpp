#pragma once
#include "user.h"
#include <string>
using namespace std;

class UserHandler {
private:
  User* m_user;
public:
  string* request(const string& input);
  UserHandler(User* user);
  ~UserHandler();
};
