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

  dataFile.open("Inventory.txt", ios::in);
  if (dataFile.is_open()){
    while(getline(dataFile, line)){

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
    cout << nodePtr->item << "------ $" << nodePtr->cost << " -------" << nodePtr->count << endl;

    nodePtr = nodePtr->next;
  }
}
