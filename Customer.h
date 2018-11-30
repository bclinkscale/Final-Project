#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <stack>
#include <vector>
#include <string>

using namespace std;

class Customer{
private:
  //Creating a stack to hold the items inside the cart
  string name;
  vector <string> cart;

public:
  //Constructor
  Customer(string);
  //Functions that will allow the user to manipulate the items inside the cart
  void add_to_cart(string);
  void remove_from_cart(int);
  void view_cart();


};
#endif
