#ifndef LUCKYSTORE_H
#define LUCKYSTORE_H

#include "Store.h"
#include <map>
#include <tuple>
#include <fstream>
#include <iostream>

using namespace std;

class LuckyStore : public Store{
private:
  string name;
  //These are dictionaries that will hold the prices and inventorys after reading from the file.
  //Inventory stores tuple(item cost, count of item)
  map <string, tuple<double, int>> inventory;
public:
  LuckyStore();
  void retrieve_inventory();
  void remove_inventory(string, int);
  void display_inventory();
};
#endif
