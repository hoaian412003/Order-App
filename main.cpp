#include "Handler/User.h"
#include <bits/stdc++.h>
using namespace std;

int main() {

  int choose = 0; // input from user

  while (1) {
    User *user = new User();
    user->Login();
    cout << "Dat hang thanh cong, nhan 1 de tiep tuc mua hang, nhan 2 de thoat";
    int choose;
    cin >> choose;
    if (choose == 2)
      return 0;
  }

  return 0;
}
