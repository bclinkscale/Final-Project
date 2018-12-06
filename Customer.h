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
  Customer(int); // constructor
  Customer(const Customer &); // copy constructor
  ~Customer(); // deconstructor
  //Functions that will allow the user to manipulate the items inside the cart
  void add_to_cart(string); // enqueue
  void remove_from_cart(string &); // dequeue
  bool isEmpty() const; // check to see if empty
  bool isFull() const; // check to see if empty
  void clear_Cart();
  string view_cart(); // view current cart
};

#endif
