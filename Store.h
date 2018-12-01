#ifndef STORE_H
#define STORE_H

#include <string>

using namespace std;

class Store{
private:
  string ItemName;
  double Price;


public:
  StoreItem(string i, double p) {
    itemName = i ;
    price = p;
  }

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
