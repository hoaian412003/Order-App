#include <bits/stdc++.h>
using namespace std;

class Voucher {
  float scale;             // scale = 0.2 is sale 20%. Total = sum * salce;
  string description = ""; // description about voucher;

public:
  Voucher(
      string username); // have username and read voucher in file Voucher.txt
  Voucher(float scale, string description);
  // this -> voucher = voucher, this -> description = description
  string getDescription();        // return description;
  float getScale();               // return scale;
  void randomVoucher(int choose); // An viet cho
};
