#include "Voucher.h"
#include <bits/stdc++.h>
using namespace std;
class User {
  string username, password;

public:
  User();
  void Login();
  // Input username and password. Check username and password in file "User.txt"
  // if have correct set this -> username = username; this -> password =
  // password; otherwise recall Login();
  void Register();
  // Input username. Check username is in file or not. If user is in file recall
  // Register(); else Input password then save username and password to file
  // User.text
  Voucher LoadVoucher(string username);
  // Input is usrename and return Voucher found in file Voucher.text
};
