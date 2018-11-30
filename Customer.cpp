#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string n){
  name = n;
}

void Customer::add_to_cart(string item){
  cart.push_back(item);
}

void Customer::remove_from_cart(int a){
  cart.erase(cart.begin() + (a -1));
}

void Customer::view_cart(){
  for(int item; item < cart.size(); item++){
    cout << cart[item] << endl;
  }
}
