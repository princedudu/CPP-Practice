// #define NDEBUG
#include <iostream>
#include <cassert>

void compute_coins (int coin_value, int& num, int& amount_left);

int main () {
  using namespace std;
  char decision;

  do {
    int money, amount_left, num_of_quarters = 0, num_of_dimes = 0, num_of_pennies = 0;
    cout << "Please input money you want to be broken down(0<range<100 cents): ";
    cin >> money;
    assert(money < 100 && money > 0);
    amount_left = money;
    compute_coins(25, num_of_quarters, amount_left);
    compute_coins(10, num_of_dimes, amount_left);
    compute_coins(1, num_of_pennies, amount_left);

    // Output result
    cout << money << " cents can be given as\n"
         << num_of_quarters << " quarters "
         << num_of_dimes << " dimes "
         << num_of_pennies << " pennies. \n";
    cout << "Would you like to continue?(Y/N)";
    cin >> decision;
  } while (decision == 'Y' || decision == 'y');
}

void compute_coins (int coin_value, int& num, int& amount_left) {
  num = amount_left / coin_value;
  amount_left %= coin_value;
}