#include "Store.h"
#include "LuckyStore.h"
#include "Customer.h"
#include <iostream>


using namespace std;

int main(){
  string name;
  bool shopping = true;
  LuckyStore lucky;

  cout << "What is your name?" << endl;
  cin >> name;

  Customer customer = Customer(name);
  while (shopping){
    cout << "Select an aisle you would like to enter?" << endl;
    cout << "[0] for " << endl;


  }


}
