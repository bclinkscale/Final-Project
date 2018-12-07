#ifndef STORE_H
#define STORE_H

#include <string>
#include <stack>

using namespace std;

class Store{
private:
  string itemName;
  double price;


public:
  Store();
  Store(string, double);

  void setItemName(string i){
    itemName = i;

  }

  void setPrice(double p){
    price = p;
  }

  string getItemName() const{
    return itemName;
  }

  int getPrice() const{
    return price;
  }
};

#endif
