#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[81];
  int length = 0;
  cin.getline(str, 80, '\n');
  for (int a = 0; a < 80 || str[a] != '\n'; a++) {
    length++;
  }
  cout << length << endl;
  cout << str << endl;
  //for (int a = 0; a < 

  return 0;
}
