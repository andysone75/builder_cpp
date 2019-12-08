#include <iostream>
#include "../h/user.h"
using namespace std;

User::User(int money) {
  m_money = money;
}

int User::getMoney() {
  return m_money;
}

void User::addMoney(int amount) {
  m_money += amount;
}
