#ifndef STORE_H
#define STORE_H

#include <string>

using namespace std;

class Store{
private:
  struct Checkout{
      string item_name;
      double price;
      int count;
      struct Checkout *next;
  };
  Checkout *head;
  double total;
public:
  Store();
  void append_node(string, double, int);
  double get_total();
  void display_checkout() const;
  void calculate_total();
};

#endif
