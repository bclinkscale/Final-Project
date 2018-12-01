#include "Store.h"
#include "LuckyStore.h"
#include <fstream>
#include <sstream>
#include <iomanip> 

using namespace std;

int main(){
  fstream dataFile;
  string line;
  
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
    

return 0;
}
