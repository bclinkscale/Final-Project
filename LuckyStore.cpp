#include "LuckyStore.h"
#include <fstream>
#include <iostream>
#include <string>

void LuckyStore::greet(){

  ifstream FILE(greetFile.c_str());
	string line;
	if (FILE.is_open()){
		while (getline(FILE, line)){
			cout << line << endl;
		}
		FILE.close();
	}
}

void LuckyStore::display_aisle(){
  for(int a; a < aisle.length(); a++){
    cout << aisle[a] << endl;
  }
}

string LuckyStore::retrieve_inventory(){

  return "";
}

void LuckyStore::remove_inventory(){

}
