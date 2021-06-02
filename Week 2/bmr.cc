// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-20
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 02-01
//
// Made a program to check bmr.....
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  //Declare and initialize a constant that represents the
  // conversion rate from inches to centimeters.

  const float kIn_cm = 2.54;
  //Declare and initialize a constant that represents the
  // conversion rate from pounds to kilograms.

  const float kLb_pd = 0.4535;

  cout << "This program estimates the basal metabolic rate\n";
  cout << "using the Mifflin St Jeor Equation.\n";

  cout << "Please enter the subject's sex.\n";
  cout << "Please enter 'm' for male or 'f' for female: ";
  string sex;
  cin >> sex;

  cout << "You entered '" << sex << "'\n";
  bool is_male_flag = false;
  is_male_flag = (sex == "m");

  //Prompt for the age of the subject in years

  cout << "Please enter the subject's age in years (no decimal point please): ";

  // Declare an int variable to store the subject's age in years.
  int age;
  // Read the value of the subject's age from the keyboard and store
  // the value in the previously defined variable.
  cin >> age;
  // Print to the terminal the value saved for the subject's age
  cout << "You entered '" << age<< "' years old.\n";
  // Prompt to determine what unit system to use; US or metric
  cout << "Would you like to enter the subject\'s height and weight in metric units (kg & cm) or U.S. customary units (in, lbs)?";
  // Declare a variable to store the response from the previous prompt
  string unit_choice;
  // Read the value from the keyboard and store the value in the previously defined variable.
  cin >> unit_choice;

  // Print to the terminal the value saved for the unit system
  cout << "You entered '" << unit_choice << "'.\n";

  // Declare and initialize a boolean variable named is_metric_flag
  bool is_metric_flag = false;
  // assign the variable is_metric_flag true if the subject entered
  // "m" and false otherwise (meaning they entered "u")

  if(unit_choice == "m"){
    is_metric_flag = true;
  }else{
    is_metric_flag = false;
  }

  // Declare and initialize a float variable for the height
  // Remember to initialize all floats to NAN.
  float height = 0.0;
  // Prompt the subject to enter the value for height.
  // Use the is_metric_flag to figure out which system is being used
  // and adjust the prompts accordingly.
  // Remember to immediately convert inches to centimeters
  // You will need to use an if-else statement.
  if(is_metric_flag){
    cout << "Please enter height in centimeters, decimal points are OK: ";
    cin >> height;
    height = height;
  }else{
    cout << "Please enter height in inches, decimal points are OK: ";
    cin >> height;
    height = height * kIn_cm;
  }
  // Prompt the subject to enter the value for weight.
  // Use the is_metric_flag to figure out which system is being used
  // and adjust the prompts accordingly.
  // Remember to immediately convert pounds to kilograms
  // You will need to use an if-else statement.
  float weight = 0.0;
  if(is_metric_flag){
    cout << "Please enter weight in kilograms, decimal points are OK: ";
    cin >> weight;
    weight = weight;
  }else{
    cout << "Please enter weight in pounds, decimal points are OK: ";
    cin >> weight;
    weight = weight * kLb_pd;
  }

  // Declare and initialize a float variable for the 's' 
  // variable in the BMR formula
  float s_variable = 0.0; 
  // using the is_male_flag, determine the value of the 's'
  // variable in the BMR formula
  if(is_male_flag){
    s_variable = 5.0;
  }else{
    s_variable = -161.0;
  }
  // Calculate the BMR of the subject using the Mifflin St Jeor
  // formula and the values entered by the subject.
  // uncomment the next two lines once you have the other
  // parts of the program set up.
  float bmr = (10.0F * weight) + (6.25F * height) -
             (5.0F * float(age)) + s_variable;

  // Declare a string variable to hold the subject's sex
  string subject_sex;
  // Using an if-else block and the is_male_flag, determine
  // what string should be used for the subject and assign it to the
  // variable previously declared.
  // if male, then "male" else "female"
  if(is_male_flag){
    subject_sex = "male";
  }else{
    subject_sex = "female";
  }

  // Declare a string variable to hold the subject's pronoun
  string pronoun;
  // Using an if-else block and the is_male_flag, determine
  // what string should be used for the subject and assign it to the
  // variable previously declared.
  // if male, then "He" else "She"
  if(is_male_flag){
    pronoun = "He";
  }else{
    pronoun = "She";
  }
  // Summarize the data that was entered in a nicely formatted string

  cout << "Given the details of the "<<subject_sex<< " subject of "<<age<<" years of age with a height of "<<height<< " cm and a weight of "<<weight<<" kg...\n";
  // Report the subject's BMR using the correct pronoun.
  cout << pronoun << " has a BMR of " <<bmr<< " kcal per day.";

  return 0;
}