// Jose Mendez-Villanueva
// CPSC 120-02
// 2021-03-18
// jmendezvillanueva@csu.fullerton.edu
// @josemendez-villanueva
//
// Lab 05-01
//
// Made a program to take cards and reveal the secret card
//
//Add a #include for the iostream, cstdlib, and string header files
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>

using namespace std;

//Write a function that prints out an error message; the function returns
// void and has no parameters
void ErrorMessage() {
  cout << "This program may only be used by a qualified technician.";
}

//Write a function named CardValue; the function returns an int and takes
// a const string& as a parameter
int CardValue(const string& string_value) {
  string card_value = string(1, string_value.at(0));
  int card_v = 0;
  if (card_value == "A") {
    card_value = "0";
  }else if (card_value == "1"){
    card_value = "9";
  }else if (card_value == "J"){
    card_value = "10";
  }else if (card_value == "Q"){
    card_value = "11";
  }else if (card_value == "K"){
    card_value = "12";
  }
  else{
    card_value = string(1, string_value.at(0));
  }
  try{
    if (card_value == "0" || card_value ==  "9" || card_value ==  "10" || card_value ==  "11" ||  card_value ==  "12"){
      card_v = stoi(card_value);
    } else{
      card_v = stoi(card_value) - 1;
    }
  }catch (const exception& e){
    ErrorMessage();
    return 1;
  }
  
  return card_v;
}

//Write a function named IntCardValueToString; the function returns a
// string and takes an int as a parameter
string IntCardValueToString(int value) {
  string card_value;
  if (value == 0) {
    card_value = "A";
  }else if (value == 9){
    card_value = "10";
  }else if ( value == 10){
    card_value = "J";
  }else if (value == 11){
    card_value = "Q";
  }else if(value == 12){
    card_value = "K";
  }else{
    card_value = to_string(value + 1);
  }
  return card_value;
}

//Write a function named SuitMultiplier; the function returns an int and
// takes a const string& as a parameter.
int SuitOffset(const string& suit) {
  string suits = string(1, suit.at(suit.size() - 1));
  int suit_offset_number;
  if (suits == "C"){
    suit_offset_number = 1;
  }else if (suits == "D"){
    suit_offset_number = 2;
  }else if(suits == "H"){
    suit_offset_number = 3;
  }else{
    suit_offset_number = 4;
  }
  return suit_offset_number;
}


//Write a function named SecretSteps; the function returns an int and
// takes three const string& as parameters.
int SecretSteps(const string& card_one, const string& card_two,const string& card_three) {
  int c_one = (CardValue(card_one) * 4)+ SuitOffset(card_one);
  int c_two = (CardValue(card_two) * 4) + SuitOffset(card_two);;
  int c_three = (CardValue(card_three) * 4) + SuitOffset(card_three);
  array<int, 3> c_list = {c_one, c_two, c_three};

  int low = 0;
  int high = 0;
  int middle = 0;

  for (int i = 0; i < 3; i++){
    for (int j = 3; j > 2; j--){
      try{
        if ((c_list.at(i) <= c_list.at(j-1)) & (c_list.at(i) <= c_list.at(j-2)) & (c_list.at(i) <=c_list.at(j-3))){
          low = c_list.at(i);

        }else if((c_list.at(i) >= c_list.at(j-1)) & (c_list.at(i) >= c_list.at(j-2)) & (c_list.at(i) >= c_list.at(j-3))  ){
          high = c_list.at(i);

        }else{
          middle = c_list.at(i);

        }
      }catch(const exception& e){
        cout << "There was an Error \n";
  
      }
    }
  }


  int steps = 0;
  array<int, 3> one = {low, middle, high};
  array<int, 3> two = {low, high, middle};
  array<int, 3> three = {middle, low, high};
  array<int, 3> four = {middle, high, low};
  array<int, 3> five = {high, low, middle};
  array<int, 3> six = {high, middle, low};


  if(c_list == one){
    steps = 1;
  }else if(c_list == two){
    steps = 2;
  }else if (c_list == three){
    steps = 3;
  }else if (c_list == four){
    steps = 4;
  }else if (c_list == five){
    steps = 5;
  }else if (c_list == six){
    steps = 6;
  }else{
    cout << "SOMETHING WENT WRONG";
  }

  return steps;                    

}


//Write a function named SecretCardValue; it returns an int and takes two
// ints as parameters
int SecretCardValue(string base_value, string one, string two, string three) {
  int base_card = CardValue(base_value); //basevalue is the basecard
  int secret_card = ((base_card + SecretSteps(one, two, three)) % 13);
  string secret_string = to_string(secret_card);
  string base_string = to_string(base_card);

  string var1 = IntCardValueToString(secret_card);

  //string var1 = IntCardValueToString(CardValue(secret_string));
  string var2 = string(1, base_value.at(base_value.size() - 1));

 
  cout << "Your Secret Card is " << var1 << var2 << ".";
  return 0;
}


int main(int argc, char const* argv[]) {
  if (argc < 5) {
    ErrorMessage();
    return 1;
  }
  string base_card = string(argv[1]);
  string card_one = string(argv[2]);
  string card_two = string(argv[3]);
  string card_three = string(argv[4]);

  SecretCardValue(base_card, card_one, card_two, card_three);

  return 0;
}