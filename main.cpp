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
  int card_number;
  int exp_date;
  int cvv;
  
  
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
  getItemAndCost();
  cout << "Enter Card number (16 digits): " << endl;
  cin >> card_number;
  cout << "Enter expiration date (4 digits): " << endl;
  cin >> exp_date;
  cout << "Enter CVV number (3 digits): " << endl:
  cin >> cvv; 
  cout << "Processing..." << endl;
  cout << "Your card has been accepted" << endl;
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
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = 30 * num_of_items;
      total_cost += item_total;
      queue.add_to_cart(item);
    }
    if (item == "short sleeve") {
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = 20 * num_of_items;
      total_cost += item_total;
      queue.add_to_cart(item);
    }
    if (item == "shorts"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = 15 * num_of_items;
      total_cost += item_total;
      queue.add_to_cart(item);
    }
    if(item == "pants"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = 25 * num_of_items;
      total_cost += item_total;
      queue.add_to_cart(item);
    }
      if (item == "skirt"){
        cout << "How many do you want: " << endl; 
        cin >> num_of_items;
        item_total = 15 * num_of_items;
        total_cost += item_total;
        queue.add_to_cart(item);
      }
      if (item == "running shoes"{
       cout << "How many do you want: " << endl;
        cin >> num_of_items;
        item_total = 75 * num_of_items; 
        total_cost += item_total;
        queue.add_to_cart(item);
      }
      if (item == "sandles"){
         cout << "How many do you want: " << endl;
          cin >> num_of_items;
          item_total = 50 * num_of_items;
          total_cost += item_total;
          }
          if (item == "flipflops"){
            cout << "How many do you want: " << endl;
            cin >> num_of_items;
            item_total = 20 * num_of_items;
            total_cost += item_total;
            queue.add_to_cart(item);
          }
          if (item == "trench coat"){
            cout << "How many do you want: " << endl;
            cin >> num_of_items;
            item_total = 70 * num_of_items;
            total_cost += item_total;
            queue.add_to_cart(item);
          }
          if (item == "bubble coat") {
            cout << "How many do you want: " << endl;
            cin >> num_of_items;
            item_total = 60 * num_of_items;
            total_cost += item_total;
            queue.add_to_cart(item);
          }
          if (item == "cartigan"){
            cout << "How many do you want: " << endl;
            cin >> num_of_items;
            item_total = 30 * num_of_items;
            total_cost = item_total;
            queue.add_to_cart(item);
          }
          }
    
        
        
        
        
  
