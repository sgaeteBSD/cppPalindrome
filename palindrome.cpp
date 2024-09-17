/*
 * C++ Palindrome
 * Enter any string of text under 80 characters & containing letters.
 * Program will determine whether it is a palindrome or not!
 * 9/17/2024
 * Santiago Gaete
 */

#include <iostream>
#include <cstring>
#include <cctype> //for isalpha()

using namespace std;

int main() {
  char str[81]; //initial input
  char fixed[81]; //removed non-letter chars, make lowercase, etc.
  char palin[81]; //reversed for palindrome comparison
  bool palindrome = true;
  cin.get(str, 81);
  cin.get();
  int b = 0; //will be used for length of fixed str
  for (int a = 0; a < 80 && str[a] != '\0'; a++) { //for 80 or until null
    if (isalpha(str[a]) != 0) { //if alphabetical
      fixed[b] = str[a]; //copy to fixed
      fixed[b] = char(tolower(fixed[b])); //make lowercase
      b++;
    }
  }
  fixed[b] = '\0'; //add null character!
  if (fixed[0] == ' ') { //if empty (no letters)
    cout << "Invalid input! Letters are required!" << endl;
    return 0;
  }
  
  int c = 0; //palin length
  for (int a = (b - 1); a >= 0; a--) { //going from the end of fixed
    palin[c] = fixed[a]; //first char of palin will be last of fixed, etc etc
    c++; //Nice
  }
  palin[c] = '\0';

  for (int a = 0; a <= (b - 1) && palindrome == true; a++) { //compare until false
    if (palin[a] != fixed[a]) { //if palindrome fails
      cout << "Not a palindrome!" << endl;
      palindrome = false;
    }
  }
  
  if (palindrome == true) { //if palindrome didn't fail!
    cout << "Palindrome!" << endl;
    }
  
  return 0;
}
