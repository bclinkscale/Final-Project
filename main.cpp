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
  int num_of_items;
  string item;
  int queueLen;
  int item_total;


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
    if (item == "long sleeve"){
      cout << "How many do you want" << endl;
      cin >> num_of_items;
      item_total = 30 * num_of_items;
      total_cost += item_total
    }
    if (item == "short sleeve") {
      cout << "How many do you want" << endl;
      cin >> num_of_items;
      item_total = 20 * num_of_items;
      total_cost += item_total;
    }
    if (item == "shorts"){
      cout << "How many do you want" << endl;
      cin >> num_of_items;
      item_total = 15 * num_of_items;
      total_cost += item_total
    }
    if(item == "pants"){
      cout << "How many do you want" << endl;
      cin >> num_of_items;
      item_total = 25 * num_of_items;
      total_cost += item_total
    }
      if (item == "skirt"){





    \\ need help attacting cost to the item. i think we should use a dictionary but i dont know how to use them
