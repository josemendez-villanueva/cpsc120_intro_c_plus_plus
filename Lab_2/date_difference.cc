// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-20
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 02-02
//
// Made a program to check the difference between dates
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  cout << "Let's find the number of days between two dates...\n";
  // Prompt the user for a starting month
  cout << "Enter a starting month: ";
  // Declare a variable for the starting month
  int month;
  // Read from the keyboard the value of the starting month and
  // store it in a variable.
  cin >> month;
  // Prompt the user for a starting day
  cout << "Enter a starting day: ";
  // Declare a variable for the starting day
  int day;
  // Read from the keyboard the value of the starting day and
  // store it in a variable.
  cin >> day;
  // Prompt the user for a starting year
  cout << "Enter a starting year: ";
  // Declare a variable for the starting year
  int year;
  // Read from the keyboard the value of the starting year and
  // store it in a variable.
  cin >> year;
  // Print out a blank line between the two dates to make it
  // easy to read.
  cout << "\n";

  // Prompt the user for a ending month
  cout << "Enter an ending month: ";
  // Declare a variable for the ending month
  int end_month;
  // Read from the keyboard the value of the ending month and
  // store it in a variable.
  cin >> end_month;
  // Prompt the user for a ending day
  cout << "Enter an ending day: ";
  // Declare a variable for the ending day
  int end_day;
  // Read from the keyboard the value of the ending day and
  // store it in a variable.
  cin >> end_day;
  // Prompt the user for a ending year
  cout << "Enter an ending year: ";
  // Declare a variable for the ending year
  int end_year;
  // Read from the keyboard the value of the ending year and
  // store it in a variable.
  cin >> end_year;
  // Summarize the input
  // Uncomment the line below and edit as needed.
  cout << "\nThe number of days between " << month << "/" << day
       << "/" << year << " and " << end_month << "/" << end_day << "/"
       << end_year << " is ";

  // Declare a variable to represent the Julian Day for the 
  // starting day and calculate the Julian Day given the starting date
  // data entered by the user. Use the formula provided in the README.

  int julian_day = day - 32075 + 1461 * (year + 4800
      + (month - 14) / 12) / 4
      + 367 * (month - 2 - (month - 14) / 12 * 12)
      / 12 - 3 * ((year + 4900 + (month - 14) / 12)
      / 100) / 4;

  // Declare a variable to represent the Julian Day for the 
  // ending day and calculate the Julian Day given the ending date
  // data entered by the user. Use the formula provided in the README.

  int end_julian_day = end_day - 32075 + 1461 * (end_year + 4800
      + (end_month - 14) / 12) / 4
      + 367 * (end_month - 2 - (end_month - 14) / 12 * 12)
      / 12 - 3 * ((end_year + 4900 + (end_month - 14) / 12)
      / 100) / 4;

  //Declare a variable to store the difference between the two
  // Julian Days. Calculate the difference between the two dates.

  int day_difference = end_julian_day - julian_day;

  //Print to the terminal the number of days between the two dates.
  cout << day_difference;
  return 0;
}
