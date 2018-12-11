#include "Store.h"
#include <iostream>
#include <fstream>

using namespace std;

Store::Store(){
  head = nullptr;

  total = 0.0;
}

void Store::append_node(string i, double p, int c){
  Checkout *newNode;
  Checkout *nodePtr;

  newNode = new Checkout;
  newNode->item_name = i;
  newNode->price = p;
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

void Store::display_checkout() const{
  Checkout *nodePtr;
  double t;
  fstream r;
  nodePtr = head;

  r.open("receipt.txt", ios::out);
  if (r.is_open()){
    r << "Your Receipt" << endl;
    while (nodePtr){
      r << "Item: " << nodePtr->item_name << " Quantity: " << nodePtr->count << " ------- $" << nodePtr->price << endl;
      t += nodePtr->price;

      nodePtr = nodePtr->next;
    }
    r << "sub total: $" << t << endl;
    t += (t*.06);
    r << "total (tax): $" << t << endl;
    r.close();
  }
}

double Store::get_total(){
  return total;
}
