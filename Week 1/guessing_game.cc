// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-02-11
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 01-02
//
// Made a program to take input to try and see if the input from the person matches our secret number....
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declare a variable named secret_number and
  //       hardcode the value to 42.
  int secret_number = 42;

  // Declare a variable named player_guess that will store the player's
  // guess

 int player_guess;
  // Prompt the player for a guess and collect their guess
 cout << "Guess a number: ";

  // Save the player's guess into player_guess using cin and >>
 cin >> player_guess;
  // Print out the player's guess.
  //       "You guessed 12, let's see if that's right..."
  //       To build up tension, you can use the sleep function to
  //       put the program to sleep for a few seconds.
  //       See
  //       https://manpages.ubuntu.com/manpages/disco/en/man3/sleep.3posix.html
  cout << "You guessed "<< player_guess << ",let's see if that's right...\n";

  // If the guess is the same (or equal to) the secret_number
  //       print "Winner, winner, chicken dinner!\n"
 if(player_guess == secret_number){
  cout << "Winner, winner, chicken dinner!\n";
}
  // Else if the the guess is less than the secret_number
  //       print "Getting colder...\n"

 else if(player_guess <= secret_number){
  cout << "Getting colder...\n";
}
  // Else the guess must be greater than the secret_number
  //       print "Too warm...\n"

 else{
  cout << "Too warm...\n";
}

  return 0;
}
