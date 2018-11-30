#ifndef LUCKYSTORE_H
#define LUCKYSTORE_H

#include "Store.h"
#include <stack>
#include <map>

using namespace std;

class LuckyStore : public Store{
private:
  string greetFile = "greetings.txt";
  //These are dictionaries that will hold the prices and inventorys after reading from the file.
  //Prices will be formatted as {"[Item name here]" : [Price of item]}
  map <string, double> prices;
  //Inventory will be formatted as {"[Item name here]" : [Number of items in stock]}
  map <string, int> inventory;
  string aisle[5] = {"Shoes", "Pants", "Shirts", "Coats", "Undergarments"};

public:

  void greet();
  void display_aisle();
  string retrieve_inventory();
  void remove_inventory();



};
#endif
