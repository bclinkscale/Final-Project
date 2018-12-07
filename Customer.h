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
  void add_to_cart(int); // enqueue
  void remove_from_cart(string &); // dequeue
  bool isEmpty() const; // check to see if empty 
  bool isFull() const; // check to see if full
  void clear_Cart();
  string view_cart(); // view current cart
};

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

  for (int i = 0; i < item.queueLen; i++)
    queueArray[i] = item.queueArray[i];
  }
  
  Customer::~Customer(){             // destructor 
    delete [] queueArray;
  }
  void Customer::add_to_cart(int i){
    if (isFull())
      cout << "Your cart is full" << endl;
    else{
      rear = (rear + 1) % queueLen; 
      queueArray[rear] = i;
      numItems++;
    }
    
  void Customer::remove_from_cart(string &i){
    if (isEmpty())
      cout << "Your cart is empty" << endl;
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
   bool Customer::isFull() const{
    bool status;
    if (numItems < queueLen)
      statue = false;
    else 
      status = true;
  }
  bool Customer::isEmpty() const{
  bool status;
    if (numItems)
      status = false;
    else
      status = true;
    return status;
  }
}
#endif

