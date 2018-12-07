#include "LuckyStore.h"
#include <fstream>
#include <iostream>
#include <string>

void LuckyStore::retrieve_inventory(){

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
}

void LuckyStore::remove_inventory(string c, int i){
  int count = get<1>(inventory[c]);
  count -= i;

  inventory[c] = {get<0>(inventory[c]), count};

}

void LuckyStore::display_inventory(){
  for(auto& i: inventory){
    cout << i.first << endl;
  }
}
