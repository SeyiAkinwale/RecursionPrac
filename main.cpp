#include <iostream>
#include <string>
using namespace std;

string doubleDollars(string n) 
{

  if(n.length()==2 && n[n.length()-2]!=n[n.length()-1])
    return n.substr(0,2);
  else if(n.length()==2 && (n[n.length()-2]==n[n.length()-1]))
    return (n.substr(0,1)+"$$"+n.substr(1,1));
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
  cout << endl << doubleDollars("yy");
  cout << endl << doubleDollars("yyuu");
  cout << endl << doubleDollars("aaaa");
  return 0;
}