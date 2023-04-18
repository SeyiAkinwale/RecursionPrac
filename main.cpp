#include <iostream>
using namespace std;

canEqualTarget(const int a[], int size, int target)
{
  //base case: both left and right elem are brackets
  if(str[0]=='<' && str[str.length()-1]=='>') return str;
  
  //recursive case 1: only the left elem is bracket
  //so, remove last element
  else if (str[0]=='<')
    return findAngles(str.substr(0,str.length()-1));

}

int main() {
  cout << endl << findAngles("a<aaafg>a");


  return 0;
}