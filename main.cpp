#include "Store.h"
#include "LuckyStore.h"
#include "Customer.h"
#include <fstream>
#include <sstream>
#include <iomanip>


using namespace std;

bool shopping();
void card_scan();

int main(){
  fstream dataFile;
  string line;
  bool isShopping = true;

  cout << "Hello welcome to the LuckyStore! Here is what we have in stock: " << endl;
  dataFile.open("userInventory.txt", ios::in);
  if (dataFile.is_open()){
    while(getline(dataFile, line)){
      cout << line << endl;
    }
    dataFile.close();
  }else{
    cout << "CANNOT READ FILE" << endl;
  }

  while (isShopping){
    isShopping = shopping();
    card_scan();
  }

return 0;
}

bool shopping(){
  int num_of_items;
  string item;
  int queueLen;
  int item_total;
  fstream r;

  LuckyStore Lucky;
  Lucky.read_inventory();

  cout << "From the items you see, how many different clothes do you want to buy. Type a Number." << endl;
  cin >> queueLen;

  Customer queue (queueLen);
  Store checkout;
  while(!queue.isFull()){
    cout << "Enter Item: (CASE AND SPACE SENSITIVE!)" << endl;
    cin >> item;
    if (item == "long-sleeve"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "short-sleeve") {
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "shorts"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if(item == "pants"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "skirt"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "running-shoes"){
     cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "sandles"){
       cout << "How many do you want: " << endl;
        cin >> num_of_items;
        item_total = Lucky.get_item_price(item) * num_of_items;
        Lucky.remove_from_inventory(num_of_items, item);
        queue.add_to_cart(item);
        checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "flipflops"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "trench-coat"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "bubble-coat") {
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
    if (item == "cartigan"){
      cout << "How many do you want: " << endl;
      cin >> num_of_items;
      item_total = Lucky.get_item_price(item) * num_of_items;
      Lucky.remove_from_inventory(num_of_items, item);
      queue.add_to_cart(item);
      checkout.append_node(item, item_total, num_of_items);
    }
  }
    Lucky.display_inventory();
    cout << endl;
    checkout.display_checkout();


    return false;
}

void card_scan(){
  int card_number;
  int exp_date;
  int cvv;

  cout << "Enter Card number (16 digits): " << endl;
  cin >> card_number;
  cout << "Enter expiration date (4 digits - Excluding the / ): " << endl;
  cin >> exp_date;
  cout << "Enter CVV number (3 digits): " << endl;
  cin >> cvv;
  cout << "Processing..." << endl;
  cout << "Your card has been accepted" << endl;
}
