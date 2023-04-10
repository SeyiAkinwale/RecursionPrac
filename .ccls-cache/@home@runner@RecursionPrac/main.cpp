#include <iostream>
using namespace std;

int getDigitCount(int num, int digit) {
  if (num <= 10 && num==digit) 
    return 1;              //primary digit that is target
  else if (num <=10 && num!=digit) 
    return 0;              //primary digit that is not target
  else if (num%10==digit)  //non-primary digit that is target
    return (getDigitCount(num/10, digit)+1); 
  else                     //non-primary digit that is not target
    return getDigitCount(num/10, digit);
}

int main() {
  cout<< endl<< getDigitCount(12235, 2);
  cout<< endl<< getDigitCount(12235, 7);
  cout<< endl<< getDigitCount(12235, 2);
  cout<< endl<< getDigitCount(0, 2);
  cout<< endl<< getDigitCount(0, 0);
  return 0;
}