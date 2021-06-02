// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-03-06
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 04-03
//
// Made a program to take user input to calculate the area from command line inputs and if an error occurs a message will display
//
#include <iostream>

// Add a #include for <string>

#include <string>

using namespace std;

// write a function named calculate_rectangle_area which returns
// an int and takes two integer parameters
int calculate_rectangle_area(int width, int length){
  int area = width * length;
  return area;

}
// write a function named error_message which returns void
// and has no parameters.

void error_message(){
  cout << "You need to provide two integer arguments on the command line.";
}

int main(int argc, char const* argv[]) {
  // Check to make sure there are enough arguments; print an error
  // and exit otherwise.
  if (argc < 3){
    error_message();
    return 1;
  }

  cout << "Let's calculate the area of a rectangle!\n";

  // Convert the first argument to an integer.
  // Print an error message and exit if there is a problem.
  int value_of_argument_one = 0;
  try {
    value_of_argument_one = stoi(argv[1]);
  } catch (const exception& e) {
    error_message();
  return 1;
  }
  // Convert the second argument to an integer.
  // Print an error message and exit if there is a problem.
  int value_of_argument_two = 0;
  try {
    value_of_argument_two = stoi(argv[2]);
  } catch (const exception& e) {
    error_message();
    return 1;
  }
  // Summarize the length and width entered

  cout << "OK, you have a rectangle that is "<< value_of_argument_one<< " units long and " <<value_of_argument_two<< " units wide... \n";
    // Call calculate_rectangle_area and store the returned value into a variable.
  int final_area = calculate_rectangle_area(value_of_argument_one, value_of_argument_two);
    // Print the calculated area
  cout << "The area of this rectangle is " <<final_area<< " square units.";
  return 0;
}