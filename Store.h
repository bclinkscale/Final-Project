#ifndef STORE_H
#define STORE_H

#include <string>

using namespace std;

class Store{
private:
  string ItemName;
  double Price;


public:
  StoreItem() {
    itemName = " " ;
    price = 0;
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
