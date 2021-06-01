// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-03-06
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 04-01
//
// Made a program to take user input to calculate the area
//
#include <iostream>

using namespace std;

// write a function named calculate_rectangle_area which returns
// an int and takes two integer parameters

int calculate_rectangle_area(int length, int width){
  int area = length * width ;
  return area;
}

int main(int argc, char const *argv[]) {
  cout << "Let's calculate the area of a rectangle!\n";
  // Prompt for the length and width of the rectangle.
  int length;
  cout <<"What's the length of the rectangle (no decimals please)?";
  cin >> length;

  int width;
  cout<< "What's the width of the rectangle (no decimals please)?";
  cin >> width;

  // Summarize the length and width entered
  cout << "OK, you have a rectangle that is "<<length<< " units long and " <<width<< " units wide...\n";
  // Call calculate_rectangle_area and store the returned value into a variable.
  int final_area = calculate_rectangle_area(length, width);
  // Print the calculated area
  cout << "The area of this rectangle is " << final_area << " square units.";
  return 0;
}