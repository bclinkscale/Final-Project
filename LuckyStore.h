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

  void retrieve_inventory(){
    fstream dataFile;
    string item_name;
    double cost;
    int count;

    dataFile.open("Inventory.txt", ios::in);

    if (dataFile.is_open()){
      dataFile >> item_name;
      dataFile >> cost;
      dataFile >> count;

      inventory[item_name] = {cost, count};

    }
  };

  void remove_inventory(string c, int i){
    int count = get<1>(inventory[c]);
    count -= i;

    inventory[c] = {get<0>(inventory[c]), count};

  };

  void display_inventory(){
    for(auto& i: inventory){
      cout << i.first << endl;
    }
  }
};
#endif
