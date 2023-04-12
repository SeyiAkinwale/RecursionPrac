#include <iostream>
#include <string>
using namespace std;

string findAngles(string str) 
{
  //base case: both left and right elem are brackets
  if(str[0]=='<' && str[str.length()-1]=='>') return str;
  
  //recursive case 1: only the left elem is bracket
  //so, remove last element
  else if (str[0]=='<')
    return findAngles(str.substr(0,str.length()-1));
  
  //recursive case 2: only the right elem is bracket
  //so, remove first element
  else if (str[str.length()-1]=='>')
    return findAngles(str.substr(1,str.length()-1));
  
  //recursive case 3: neither elem is bracket
  //so, remove both ends
  else return findAngles(str.substr(1,str.length()-2));
}

int main() {
  cout << endl << findAngles("a<aaafg>a");
  cout << endl << findAngles("abc<bnm>789");
  cout << endl << findAngles("4agh<y>");
  cout << endl << findAngles("<x>7");
  cout << endl << findAngles("<a>bbbbbb");

  return 0;
}