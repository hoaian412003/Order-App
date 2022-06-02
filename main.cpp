#include "Handler/Menu.h"
#include "Handler/User.h"
#include <bits/stdc++.h>
using namespace std;

int main() {

  srand(time(0));

  int choose = 0; // input from user
  User *user = new User();
  Menu *menu = new Menu();
  while (1) {
    user->Login();
    menu->List();
    cout << "Chon so thu tu cua mon an de dat hang";
    cin >> choose;
    menu->Choose(choose);
    cout << "Dat hang thanh cong, nhan 1 de tiep tuc mua hang, nhan 2 de "
            "thoat\n";
    cin >> choose;
    if (choose == 2)
      return 0;
  }

  return 0;
}
