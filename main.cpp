#include <iostream>
using namespace std;

int mult(const int MULTIPLICAND1, int multiplicand2)
{
  if(multiplicand2==1) return MULTIPLICAND1;
  else return MULTIPLICAND1+ mult(MULTIPLICAND1, multiplicand2-1);
}
int main() {
  cout << "Hello World!\n";
  cout << endl << mult(5,1);
  cout << endl << mult(5,2);
  cout << endl << mult(5,6);
  cout << endl << mult(2,7);
  cout << endl << mult(1,7);
}