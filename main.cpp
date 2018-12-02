#include "Store.h"
#include "LuckyStore.h"
#include "Customer.h"
#include <fstream>
#include <sstream>
#include <iomanip> 

using namespace std;

void getItemAndCost(int x);

int main(){
  fstream dataFile;
  string line;
  int value;
  int total_cost;
  string item;
  int queueLen;
  
  
  cout << "Hello welcome to the LuckyStore! Here is what we have in stock: " << endl;
  dataFile.open(Inventory.txt. ios::in);
  if (dataFile.is_open()){
    while (getline(dataFile, line)){
      cout << line << endl;
    }
    dataFile.close();
  }
  else{
    cout << "Can't read File!" << endl;
  }
  
   
return 0;
}
  
void getItemAndCost(){
  cout << "From the items you see, how many different clothing types do you want to buy. Type a Number (Not how many of each item you want)" << endl;
  cin >> queueLen;
  Customer queue (queueLen);
  for (int i = 0, i < queuelen, i++){
    cout << "Enter Item: (CASE AND SPACE SENSITIVE!)" << endl;
    cin >> item;
    
  
