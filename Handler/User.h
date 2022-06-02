#include "../Model/User.h"
#include <bits/stdc++.h>
#include <cstdlib>
#include <fstream>
using namespace std;

void User::Login() {
  if (this->username != "") {
    return;
  }
  cout << "Nhap username va password de mua hang\n";
  cout << "Neu khach hang chua co tai khoang, nhap \"Register\" de tao tai "
          "khoan \n";
  string username, password;
  cin >> username;
  if (username == "Register") {
    Register();
    return;
  }
  cin >> password;
  ifstream in("User.txt");

  while (in.peek() != EOF) {
    string fileUsername;
    string filePassword;
    in >> fileUsername >> filePassword;
    if (username == fileUsername && password == filePassword) {
      this->username = username;
      this->password = password;
      cout << "Login thanh cong\n";
      in.close();
      return;
    }
  }
  in.close();
  cout << "Sai tai khoan hoac mat khau \n";
  Login();
}

void User::Register() {
  cout << "Nhap username va password de tao tai khoan\n";
  string username, password;
  cin >> username >> password;
  ofstream out("User.txt", ios_base::app);
  out << username << "\n";
  out << password << "\n";
  out.close();
  cout << "Tao tai khoan thanh cong, vui long dang nhap\n";
  Login();
}
