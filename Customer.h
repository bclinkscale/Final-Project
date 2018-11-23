#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <stack>
#include <string>

using namespace std;

class Customer{
private:
  //Creating a stack to hold the items inside the cart
  stack <string> cart;

public:
  //Functions that will allow the user to manipulate the items inside the cart
  void add_to_cart(string);
  void remove_from_cart(string);
  string view_cart();


};
#endif
