#include <iostream>

using namespace std;

int main() {
  // declare and initialize arrays
  int resistance[5] = {16, 27, 39, 56, 81};

  const int CURR = 5;
  double current[CURR];

  const int POW = 5;
  double power[POW];

  // for loop for user input
   
  cout << "Please input the values of the current: ";
    for (int i = 0; i < CURR; i++) {
      cin >> current[i];
    }

 
}