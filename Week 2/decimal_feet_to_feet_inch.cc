// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-20
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 02-03
//
// Made a program to change unit measurements depending on what the user inputs.
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declare a float constant that represents how many inches in 
  // a foot.
  float inchesinfoot = 12.0F;
  // Declare a float constant that represents how many eighths
  // there are in an inch.
  float eightsininch = 8.0F;
  // Declare a variable to store the input decimal feet and
  // intialize the variable.
  float decimalfeet = 0.0F;
  // Prompt the user to enter the number of feet to convert
  cout << "Enter the number of feet you would like converted: ";
  // Read the decimal number from the keyboard and store it in 
  // the variable previously declared.
  cin >> decimalfeet;
  // Declare a string variable to store the sign if the 
  // input number is negative
  string negative;
  // Use an if block to initialize the sign string to "-" if
  // the input decimal is negative and convert the input decimal to 
  // a positive number.
  if(decimalfeet < 0){
    negative = '-';
    decimalfeet = -1 * decimalfeet;
  }else{
    negative = ' ';
  }
  // Declare a float variable to represent the integer portion of
  // the input decimal
  float wholenumber;
  // Declare a float variable to represent the decimal portion of
  // the input decimal.
  float decimalnumber;
  // Separate the integer and fractional parts of the input
  // decimal and assign the parts to their respective variables
  if( decimalfeet - int(decimalfeet) > 0.0){
    decimalnumber = decimalfeet - int(decimalfeet);
    wholenumber = int(decimalfeet);
  }else if(decimalfeet - int(decimalfeet) < 0.0){
    decimalnumber = decimalfeet - (int(decimalfeet) - 1.0);
    wholenumber = int(decimalfeet) - 1.0;
  }else if(decimalfeet - int(decimalfeet) == 0){
    decimalnumber = 0;
    wholenumber = int(decimalfeet);
  }else{
    cout << "Something went wrong!";
  }
  // Declare a variable to represent the decimal inches
  float decimal_inches;
  // Calculate the decimal inches using the fractional portion
  // of the input decimal and the number of inches in a foot
  decimal_inches = decimalnumber * inchesinfoot;
  // Declare a float variable to represent the integer portion of
  // the inch decimal
  float integer_inch; 
  // Declare a float variable to represent the decimal portion of
  // the inch decimal.
  float decimalinteger_inch;
  // Separate the integer and fractional parts of the inch
  // decimal and assign the parts to their respective variables
  if(decimal_inches - int(decimal_inches) > 0.0){
    decimalinteger_inch = decimal_inches - int( decimal_inches);
    integer_inch = int(decimal_inches);
  }else if(decimal_inches - int(decimal_inches) < 0.0){
    decimalinteger_inch = decimal_inches - (int(decimal_inches) - 1.0);
    integer_inch = int(decimal_inches) - 1.0;
  }else if(decimal_inches - int(decimal_inches) == 0){
    decimalinteger_inch = 0;
    integer_inch = int(decimal_inches);
  }else{
    cout << "Something went wrong";
  }

  // Declare a float variable to represent the number of
  // eighths of inches
  float eighths;

  // Using the fractional part of the inch decimal,
  // calculate the number of decimal eighths
  eighths = decimalinteger_inch * eightsininch;
  // Declare a float variable to represent the decimal portion of
  // the eighths decimal.
  float decimal_eighths;
  // Separate the integer part of the eighths
  // decimal and assign the parts to the respective variable
  float integer_eighths;
  if(eighths - int(eighths) > 0.0){
    decimal_eighths = eighths - int(eighths);
    integer_eighths = int(eighths);
  }else if(eighths - int(eighths) > 0.0){
    decimal_eighths = eighths - (int(eighths) - 1.0);
    integer_eighths = int(eighths) - 1.0;
  }else if(eighths - int(eighths) == 0){
    decimal_eighths = 0;
    integer_eighths = int(eighths);
  }else{
    cout << "Something went wrong";
  }
  // Print a summary of the conversion using the original
  // input decimal, the sign string, and the number of feet, inches,
  // and eighths of inches.
  cout << "Your number of " <<decimalfeet<< " has been converted to" << negative<< wholenumber << " feet " << integer_inch<< " inches " << integer_eighths<< " eighths "  ;
  return 0;
}