#pragma once

class User {
private:
  int m_money;
public:
  User(int money);
  int getMoney();
  void addMoney(int amount);
};
