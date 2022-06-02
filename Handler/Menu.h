#include "../Model/Menu.h"
#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;

Item::Item(string name, int prize) {
  this->name = name;
  this->prize = prize;
}

Menu::Menu() {
  ifstream in("Menu.txt");
  while (in.peek() != EOF) {
    string name;
    int prize;
    getline(in, name, '\n');
    in >> prize;
    in.ignore();
    Item *item = new Item(name, prize);
    menu.push_back(*item);
  }
  in.close();
}

void Menu::List() {
  cout << "Day la danh sach cac mon an cua chung toi: \n";
  int stt = 0;
  for (auto x : menu) {
    stt++;
    cout << stt << ": " << x.name << "\n";
  }
}

void Menu::Choose(int choose) {
  choose--;
  if (choose == menu.size()) {
    cout << "Mon an khong hop le!!!\n";
  }
  cout << "Mon an qui khach chon la: " << menu[choose].name << "\n";
  cout << "Hien tai co 3 size S, M, L. Gia cho tung size la: \n";
  cout << "S: " << menu[choose].prize << "\n";
  cout << "M: " << menu[choose].prize + 10 << "\n";
  cout << "L: " << menu[choose].prize + 20 << "\n";
  cout << "Vui long nhap S hoac M hoac L de chon size\n";
  char size;
  cin >> size;
  int total = menu[choose].prize;
  if (size == 'M')
    total += 10;
  if (size == 'L')
    total += 20;
  cout << "Thong gia tien cua ban la: " << total << "\n";
}
