#include <iostream>
#include <string>
using namespace std;

string findAngles(string str) 
{
  if(str[str.length()-1]=='<')
    return "<";
  else if(str.length()==1 && str[0]!='<')
    return "";
  //else if (str.length()!=1 && str[str.length()-1]=='<')
  //  return "<";
  else if (str[str.length()-1]=='>')
    return findAngles(str.substr(0,str.length()-1))+">";
  else return findAngles(str.substr(0,str.length()-1))+str[str.length()-1];
}


int main() {
  cout << endl << findAngles("<>");

  return 0;
}