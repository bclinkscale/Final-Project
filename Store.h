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
  Store (string i, double p) {
    itemName = i ;
    price = p;
  };

void setItemName(string i){
  (ItemName = i;)
}
void setPrice(double p){
  (Price = p;)
}
string getItemName() const{
  (return ItemName;)
}
int getPrice() const{
  (return Price;)
}
};

#endif
