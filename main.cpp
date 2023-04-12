#include <iostream>
#include <string>
using namespace std;

string findAngles(string str) 
{
  if(str[0]=='<' && str[str.length()-1]=='>')
    return str;
  else if (str[0]=='<')
    return findAngles(str.substr(0,str.length()-1));
  else if (str[str.length()-1]=='>')
    return findAngles(str.substr(1,str.length()-1));
  else
      return findAngles(str.substr(1,str.length()-2));
}


int main() {
  cout << endl << findAngles("a<aaafg>a");
  cout << endl << findAngles("abs<bnm>789");
  //cout << endl << findAngles("4agh<y>");
  //cout << endl << findAngles("<a>bbbbbb");

  return 0;
}