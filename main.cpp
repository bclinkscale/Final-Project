#include "Store.h"
#include "LuckyStore.h"
#include <fstream>
#include <sstream>
#include <iomanip> 

using namespace std;

int main(){
  fstream dataFile;
  string line;
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
