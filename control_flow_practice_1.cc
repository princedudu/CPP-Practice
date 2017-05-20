#include <iostream>
using namespace std;

int main() {
  double cost_per_pencil, inflation;
  int purchase_from_now;
  cout << "Please input the cost for each pencil in this year: \n";
  cin >> cost_per_pencil;
  cout << "Please input the number of year from now you want to purchase the pencil: \n";
  cin >> purchase_from_now;
  cout << "Please input the inflation(percentage): \n";
  cin >> inflation;
  double cost = cost_per_pencil;
  int i = 0;
  inflation = inflation / 100;
  while (i < purchase_from_now) {
    cost = cost * (1 + inflation);
    i++;
  }
  cout << "The price for each pencil after "
       << purchase_from_now
       << " years is "
       << cost << endl;
  return 0;
}
