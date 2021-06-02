// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-11
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 01-01
//
// Made a program to identify a right triangle or not.....
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Remember that the Pythagorean Theorem states that given a right triangle (a
  // triangle with one 90 degree angle), the sum of the squares of its sides sum
  // to the square of the hypotenuse. That means we can express the theorem as
  // the equality: (side_a * side_a) + (side_b * side_b) == (side_c * side_c)
  // The left hand side represents the sum of the squares of the side.
  // The right hand side represents the square of the hypotenuse.

  // Use cout to print a prompt for the length of the first side.\
  // Remember to print a space after the question mark but no carriage return.
  cout << "What's the length of the first side? ";

  // Declare a variable named side_a to store the length of the first side
  int side_a = 0;

  // Use cin to read the value from the terminal into your variable side_a
  cin >> side_a;

  // Use cout to print a prompt for the length of the second side.\
  // Remember to print a space after the question mark but no carriage return.
  cout << "What's the length of the second side? ";

  // Declare a variable named side_b to store the length of the second
  // side
int side_b = 0;

  // Use cin to read the value from the terminal into your variable side_b
 cin >> side_b;

  // Use cout to print a prompt for the length of the hypotenuse or diagonal side.\
  // Remember to print a space after the question mark but no carriage return.
 cout << "What's the length of the diagonal/hypotenuse? ";
  //  Declare a variable named side_c to store the length of the hypotenuse
 int side_c = 0;
  //  Use cin to read the value from the terminal into your variable side_c
 cin >> side_c;
  // Declare a variable named left_hand_side to represent the left hand side of
  // our equality
  int left_hand_side;
  // Set this variable equal to the sum of the squares of the sides A and
  // B.
  left_hand_side = (side_a * side_a) + (side_b * side_b);
  // Declare a variable named right_hand_side to represent the right hand side
  // of our equality
  int right_hand_side;
  //  Set this variable equal to the square of the hypotenuse or in our
  // case side C
  right_hand_side = side_c * side_c;
  // We print a message restating all the data that was given to our program
  cout << "\nA triangle with sides of length " << side_a << " and " << side_b
       << "\n";
  cout << "and a hypotenuse of length " << side_c << " is ";
  // Using what we calculated for the right_hand_side and left_hand_side, let's
  // see if it is a right triangle or not.
  if (left_hand_side == right_hand_side) {
    cout << "a right triangle!\n";
  } else {
    cout << "not a right triangle.\n";
  }
  return 0;
}