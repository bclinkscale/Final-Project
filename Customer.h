#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <stack>
#include <string>

using namespace std;

class Customer{
private:
  //Creating a queue to hold the items inside the cart
  int *queueArray;
  int queueLen;
  int front;
  int rear;
  int numItems;

public:
  //Functions that will allow the user to manipulate the items inside the cart
  void add_to_cart(string);
  void remove_from_cart(string &);
  bool isEmpty() const; 
  bool isFull() const;
  string view_cart();


};
#endif
