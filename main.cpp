#include "Handler/User.h"
#include <bits/stdc++.h>
using namespace std;

int main() {

  int choose = 0;     // input from user
  bool loged = false; // check login or not

  // User *user = new User();

  while (1) {
    // Login process
    cout << "Please login(Enter 0) or regiter (Enter 1)\n";
    cin >> choose;
    if (!loged && choose == 1) {
      // User.register();
    } else if (!loged && choose == 0) {
      // User.login()
    } else if (!loged) {
      continue;
    }
    // Order process
    // Menu *menu = new Menu();
    // menu.list();
    cout << "Enter number of food to order\n";
    cin >> choose;
    /* menu.order(); */
    cout << "Order have done! Please enter random number from 1 to 5 to choose "
            "new Lucky Voucher";
    // Voucher *voucher = new Voucher();
    cin >> choose;
    // voucher.choose(choose);
  }

  return 0;
}
