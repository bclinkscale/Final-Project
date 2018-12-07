#ifndef STORE_H
#define STORE_H

#include <string>
#include <stack>

using namespace std;

class Store{
private:
  string itemName;
  double price;


public:
  Store (string i, double p) {
    itemName = i ;
    price = p;
  };

void setItemName(string i)
{itemName = i;}

void setPrice(double p)
{price = p;}

string getItemName() const
{return itemName;}

int getPrice() const
{return price;}

};

#endif#ifndef STORE_H
#define STORE_H

#include <string>
#include <stack>

using namespace std;

class Store{
private:
  string itemName;
  double price;


public:
  Store (string i, double p) {
    itemName = i ;
    price = p;
  };

void setItemName(string i)
{itemName = i;}

void setPrice(double p)
{price = p;}

string getItemName() const
{return itemName;}

int getPrice() const
{return price;}

};

#endif
