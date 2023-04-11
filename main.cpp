#include <iostream>
#include <string>
using namespace std;

string findAngles(string str) 
{
  if(str.length()==1 && str[0]=="<")
    return "<";
  else if(str.length()==1 && str[0]!="<")
    return "";
}


int main() {
  cout << endl << findAngles("a");

  return 0;
}