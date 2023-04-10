#include <iostream>
using namespace std;

int getDigitCount(int num, int digit) {
  if (num <= 10 && num==digit) 
    return 1;
  else if (num <=10 && num!=digit) 
    return 0;
  else if (num%10==digit) 
    return (getDigitCount(num/10, digit)+1);
  else
    return getDigitCount(num/10, digit);
}

int main() {
  cout<< endl<< getDigitCount(12235, 2);
  cout<< endl<< getDigitCount(12235, 7);
  cout<< endl<< getDigitCount(12235, 2);
  return 0;
}