// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-03-06
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 04-02
//
// Made a program to take user input to see the argument count and display the index and atguent as well
//
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Print the argument count using argc
  cout << "The argument count (argc) is " << argc << "\n";

  // Using a loop, print out each argument on a line by itself.
  for(int indx = 0; indx < argc; indx++){
    cout << "argv["<<indx<<"] is " "\""<< argv[indx]<<"\" \n";
  }

  return 0;
}