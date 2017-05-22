#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void make_neat (ifstream& messy_file, ofstream& neat_file,
                int number_after_decimalpoint, int field_width);

int main () {
  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("raw_data_practice_5.dat");
  if (in_stream.fail()) {
    cout << "\"infile.dat\" was failed to open.";
    exit(1);
  }
  out_stream.open("neat_data_practice_5.dat");
  if (in_stream.fail()) {
    cout << "\"outfile.dat\" was failed to open.";
    exit(1);
  }

  make_neat(in_stream, out_stream, 5, 12);

  in_stream.close();
  out_stream.close();

  cout << "End of program.\n";
  return 0;
}

void make_neat (ifstream& messy_file, ofstream& neat_file,
                int number_after_decimalpoint, int field_width) {
  neat_file.setf(ios::fixed);
  neat_file.setf(ios::showpoint);
  neat_file.setf(ios::showpos);
  neat_file.precision(number_after_decimalpoint);
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.setf(ios::showpos);
  cout.precision(number_after_decimalpoint);

  double next;
  while (messy_file >> next) {
    cout << setw(field_width) << next << endl;
    neat_file << setw(field_width) << next << endl;
  }
}