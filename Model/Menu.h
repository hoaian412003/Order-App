#include <bits/stdc++.h>
using namespace std;

class Item {
public:
  string name;
  int prize;

  Item(string name, int prize);
  // input is name, option, pirze. set this -> name = name, this -> option =
  // option, this -> prize = prize
};

class Menu {
  vector<Item> menu;
  int sum = 0;

public:
  Menu();      // read all Item in file Menu.txt and push to vector menu
  void List(); // List all item menu with beatifulfortmat (options)
  void GetInfo();
  void Choose(int choose);
  // add item "choose" to sum and calculate with voucher
};
