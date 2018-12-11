#include "Store.h"
#include <iostream>

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

  nodePtr = head;

  while (nodePtr){
    cout << nodePtr->item_name << "------- $" << nodePtr->price << endl;

    nodePtr = nodePtr->next;
  }
}

double Store::get_total(){
  return total;
}

void Store::calculate_total(){
  Checkout *nodePtr;
  double t;
  nodePtr = head;

  while(nodePtr){
    t += (nodePtr->price * nodePtr->count);

    nodePtr = nodePtr->next;
  }
  total = t;
}
