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
  if(dataFile.is_open()){
    while (getline(dataFile, item_name, '|')){
      if (item_name == "\n"){
        break;
      }
      getline(dataFile, s_cost, '|');
      getline(dataFile, s_count, '|');

      istringstream ss(s_cost);
      ss >> cost;
      istringstream convert(s_count);
      convert >> count;

      append_node(item_name, cost, count);
    }
    dataFile.close();
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

void LuckyStore::display_inventory() const{
  Inventory *nodePtr;

  nodePtr = head;

  while (nodePtr){
    cout << nodePtr->item << " ------ $" << nodePtr->cost << " ------- " << nodePtr->count << endl;

    nodePtr = nodePtr->next;
  }
}

double LuckyStore::get_item_price(string i){
  Inventory *nodePtr;

  nodePtr = head;

  while(nodePtr->item != i){
    nodePtr = nodePtr->next;
  }
  return nodePtr->cost;
}

void LuckyStore::remove_from_inventory(int i, string n){
  Inventory *nodePtr;

  nodePtr = head;

  while(nodePtr->item != n){
    nodePtr = nodePtr->next;
  }

  nodePtr->count -= i;
}
