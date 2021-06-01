// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-11
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 01-03
//
// Made a program to calculate the amount of days,hours,minutes, and seconds from a given amout of seconds.....
//


#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declare a const int for the number of seconds in a minute
 const int second_minute = 60;
  // Declare a const int for the number of seconds in an hour
 const int second_hour = (60 * 60);
  // Declare a const int for the number of seconds in a day
 const int second_day = (60 * 60 * 24);
  // Declare an int variable named number_seconds to store the input
 int number_seconds;
  // Print a prompt for how many seconds the program is going to convert
  // from Remember not to put a "\n"
 cout << "Please enter the number of seconds you'd like to convert: ";
  // Use cin to store the number of seconds into number_seconds
 cin >> number_seconds;
  // Calculate the total number of days, store the result in a new
  // variable named number_days
 int number_days = (number_seconds / second_day);
  // Calculate the remaining number of seconds, store the result back into
  // number_seconds
 number_seconds = (number_seconds % second_day);
  // Calculate the total number of hours, store the result in a new
  // variable named number_hours
 int number_hours = (number_seconds / second_hour);
  // Calculate the remaining number of seconds, store the result back into
  // number_seconds
 number_seconds = (number_seconds % second_hour);
  // Calculate the total number of minutes, store the result in a new
  // variable named number_minutes
 int number_minutes = (number_seconds / second_minute);
  // Calculate the remaining number of seconds, store the result back into
  // number_seconds
 number_seconds = (number_seconds % second_minute);
  // Display the resulting values in a nice way.
 cout << "That's " << number_days << " days, " << number_hours<< " hours, " << number_minutes<< " minutes, "<< number_seconds << " seconds.";
  return 0;
}
