#include "LuckyStore.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

LuckyStore::LuckyStore(){
  head = nullptr;
  name = "Lucky Store";
}

void LuckyStore::read_inventory(){

  fstream dataFile;
  string item_name;
  double cost;
  int count;
  string line;
  string s_cost;
  string s_count;

  dataFile.open("Inventory.txt", ios::in);
  if (dataFile.is_open()){
    while(getline(dataFile, line)){
      getline(dataFile, item_name, '|');
      getline(dataFile, s_cost, '|');
      getline(dataFile, s_count, '|');

      stringstream convert(s_cost);
      convert >> cost;
      stringstream convert2(s_count);
      convert2 >> count;

      append_node(item_name, cost, count);
    }
    dataFile.close();
  }else{
    cout << "CANNOT READ FILE" << endl;
  }
}

void LuckyStore::append_node(string i, double p, int c){
  Inventory *newNode;
  Inventory *nodePtr;

  newNode = new Inventory;
  newNode->item = i;
  newNode->cost = p;
  newNode->count = c;
  newNode->next = nullptr;

  if(!head){
    head = newNode;
  }else
  {
    nodePtr = head;

    while (nodePtr->next){
      nodePtr = nodePtr->next;

    }
    nodePtr->next = newNode;
  }
}

void LuckyStore::display_inventory(){
  Inventory *nodePtr;

  while (nodePtr){
    cout << nodePtr->item << "------ $" << nodePtr->cost << " ------- " << nodePtr->count << endl;

    nodePtr = nodePtr->next;
  }
}
