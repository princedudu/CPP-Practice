#include <iostream>

double hat_size (double weight, double height);
double jacket_size (double weight, double height, int age);
double waist_size (double weight, int age);

int main () {
  char input;
  using namespace std;
  do {
    double weight, height;
    int age;
    cout << "Please input your weight, height and age in sequence: \n";
    cin >> weight >> height >> age;
    cout << "Your hat size is: " << hat_size(weight, height) << endl;
    cout << "Your jacket size is: " << jacket_size(weight, height, age) << endl;
    cout << "Your waist size is: " << waist_size(weight, age) << endl;

    cout << "Do you want to continue? (Y/N)";
    cin >> input;
  } while (input == 'Y' || input == 'y');
}

double hat_size (double weight, double height) {
  return (weight / height) * 2.9;
}

double jacket_size (double weight, double height, int age) {
  return (height * weight) / 288 + ((age - 30) / 10) * (1 / static_cast<double> (8));
}

double waist_size (double weight, int age) {
  return weight / 5.7 + ((age - 28) / 2) * (1 / static_cast<double> (10));
}