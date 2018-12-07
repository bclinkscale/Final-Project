#include "Customer.h"
#include <iostream>

Customer::Customer(int i){
  queueArray = new int[i];
  queueLen = i;
  front = -1;
  rear = -1;
  numItems = 0;
}

Customer::Customer(const Customer &item){
  queueArray = new int[item.queueLen];
  queueLen = item.queueLen;
  front = item.front;
  rear = item.rear;
  numItems = item.numItems;
  for (int i = 0; i < item.queueLen; i++){
    queueArray[i] = item.queueArray[i];
  }
}


Customer::~Customer(){             // destructor
  delete [] queueArray;
}

bool Customer::isFull() const{
  bool status;
  if (numItems < queueLen){
    status = false;
  }
  else {
    status = true;
  }
  return status;
}

bool Customer::isEmpty() const{
  bool status;
  if (numItems){
    status = false;
  }
  else{
    status = true;
  }
  return status;
}

void Customer::add_to_cart(string i){
  if (isFull()){
    cout << "Your cart is full" << endl;
  }
  else{
    rear = (rear + 1) % queueLen;
    queueArray[rear] = i;
    numItems++;
  }
}

void Customer:: remove_from_cart(string &i){
  if (isEmpty()){
      cout << "Your cart is empty" << endl;
  }
  else {
    front = (front + 1) % queueLen;
    i = queueArray[front];
    numItems--;
  }
}

void Customer::clear_Cart(){
  front = queueLen - 1;
  rear = queueLen - 1;
  numItems = 0;
}
