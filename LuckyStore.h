#ifndef LUCKYSTORE_H
#define LUCKYSTORE_H

#include "Store.h"
#include <map>

using namespace std;

class LuckyStore : public Store{
private:
  string name;
  //These are dictionaries that will hold the prices and inventorys after reading from the file.
  //Prices will be formatted as {"[Item name here]" : [Price of item]}
  map <string, double> prices;
  //Inventory will be formatted as {"[Item name here]" : [Number of items in stock]}
  map <string, double> inventory;

public:

  string retrieve_inventory();
  void remove_inventory();



};
#endif
