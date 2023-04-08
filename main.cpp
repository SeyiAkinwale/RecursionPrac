#include <iostream>
using namespace std;

int mult(const int MULTIPLICAND1, int multiplicand2)
{
  if(multiplicand2==2) return (MULTIPLICAND1+MULTIPLICAND1);
  else return MULTIPLICAND1+ mult(MULTIPLICAND1, multiplicand2-1);
}
int main() {
  cout << "Hello World!\n";
  cout << endl << mult(5,2);
  cout << endl << mult(5,3);
}