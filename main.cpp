#include <iostream>
using namespace std;

int getDigitCount(int num, int digit) {
  if (num <= 10) return 1;
  else return (getDigitCount(num/10,2)+1);
  //return -1; // This is incorrect.
}

int main() {
  cout << "Hello World!\n";
  cout << "hello1";
  getDigitCount(12235, 2);
  cout << endl << 12 / 10;
  cout << endl << 12 % 10;
  cout << endl << 1 / 10;
  cout << endl << 1 % 10;
  int number = 10;
  cout <<endl<<number;
  cout<< endl<< sizeof(number);
}