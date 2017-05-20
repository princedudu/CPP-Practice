#include <iostream>
#include <cstdlib>
using namespace std;

double unit_price (int diameter, double price);
// returns the price per square inch of a pizza.

int main () {
  int small_size_diameter;
  cout << "Please input the diameter of your pizza: ";
  cin >> small_size_diameter;

  double small_size_price;
  cout << "Please input the price of your pizza: ";
  cin >> small_size_price;

  int large_size_diameter;
  cout << "Please input the diameter of your pizza: ";
  cin >> large_size_diameter;

  double large_size_price;
  cout << "Please input the price of your pizza: ";
  cin >> large_size_price;

  double unit_price_small, unit_price_large;
  unit_price_small = unit_price(small_size_diameter, small_size_price);
  unit_price_large = unit_price(large_size_diameter, large_size_price);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "Small pizza: \n"
       << "Diameter: " << small_size_diameter << " inches; \n"
       << "Price: $" << small_size_price << " dollars; \n"
       << "Per square inch price: $" << unit_price_small << " dollars.\n"
       << "Large pizza: \n"
       << "Diameter: " << large_size_diameter << " inches; \n"
       << "Price: $" << large_size_price << " dollars.\n"
       << "Per square inch price: $" << unit_price_large << " dollars. \n\n";
  if (unit_price_small <= unit_price_large) {
    cout << "Small one is better for you. \n";
  } else {
    cout << "Large one is better for you. \n";
  }

  return 0;
}

double unit_price (int diameter, double price) {
  const double PI = 3.14159;
  double radius, area;
  radius = static_cast<double> (diameter) / 2;
  area = PI * radius * radius;

  return (price / area);
}