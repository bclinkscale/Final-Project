#ifndef LUCKYSTORE_H
#define LUCKYSTORE_H

#include "Store.h"
#include <fstream>
#include <iostream>

using namespace std;

class LuckyStore : public Store{
private:
  struct Inventory{
    string item;
    double cost;
    int count;
    struct Inventory *next;
  };

  Inventory *head;
  string name;
public:
  LuckyStore();
  void append_node(string, double, int);
  void read_inventory();
  void display_inventory();
};
#endif
