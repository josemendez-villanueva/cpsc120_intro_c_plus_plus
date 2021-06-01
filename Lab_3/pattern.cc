// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-26
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 03-02
//
// Made a program to use three loops in order to print out a pattern.
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declare and initialize a const integer named counter max (max for
  // maximum). Initialize it to 22.
  const int kcounter_max = 22;

  // Write an outer loop which starts from 0 and goes up to the counter
  // max.

  for(int counter = 0; counter < kcounter_max; counter++){
 
  // Write an inner loop which starts from the current line number and
  // counts down to zero. Make sure that this loop is inside the outer loop.
    for(int inner_one = counter; inner_one > 0; inner_one--){
      cout << "-";
    }
    
  // Print an asterisk.
  cout << "*";
  // Write another inner loop which starts from the current line number
  // and counts up to the counter max. Make sure that this loop is inside the
  // outer loop but outside the first inner loop.


    for(int inner_two = counter; inner_two < kcounter_max; inner_two++){
      cout << "|";    
    } 
    

  // print a new line character
  cout << "\n";


  }

  return 0;
}