// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-26
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 03-01
//
// Made a program to test out three different types of loops and print out the current iteration
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declare and initialize a const integer named counter max (max for
  // maximum). Initialize it to 10.
  cout << "With a for loop\n";
  const int kcounter_max = 10;

  // Write a for loop which prints out the numbers 0 through 9 with each
  // number on a line by itself. Use the previously defined constant to control
  // the loop.
  for(int up = 0; up < kcounter_max; up++){
    cout <<up<< "\n" ;
  }
  cout << "\nWith a while loop\n";
  // Write a while loop which prints out the numbers 0 through 9 with each
  // number on a line by itself. Use the previously defined constant to control
  // the loop.
  int counter = 0;
  while (counter < kcounter_max){
    cout << counter << "\n";
    counter++;
  }
  cout << "\nWith a do-while loop\n";
  // Write a do-while loop which prints out the numbers 0 through 9 with
  // each number on a line by itself. Use the previously defined constant to
  // control the loop.
  int iteration = 0;
  do{
    cout << iteration << "\n";
    iteration++;
  }while(iteration < kcounter_max);

  return 0;
}