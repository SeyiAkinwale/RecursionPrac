#include <iostream>
#include <string>
using namespace std;

string doubleDollars(string n) 
{

  if(n.length()==2) return n.substr(0,2);
  else if (n[n.length()-2]==n[n.length()-1])
  {
    return doubleDollars(n.substr(0,n.length()-1))+"$$"+n[n.length()-1];
    //return doubleDollars(n.substr(0,n.length()-1))+n[n.length()-1];
  }else if (n[n.length()-2]!=n[n.length()-1])
  {
    return doubleDollars(n.substr(0,n.length()-1))+n[n.length()-1];
  }

}


int main() {
  cout << endl << doubleDollars("goodbye");
  cout << endl << doubleDollars("yyuu");
  return 0;
}