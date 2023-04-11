#include <iostream>
#include <string>
using namespace std;

string doubleDollars(string n) 
{
  cout<<endl<<n.length();
  cout<<endl<<n.substr(0,n.length());
  cout<<" "<<n[n.length()-1];
  //cout<<n[n.length()-1];
  if(n.length()==1) return "";
  else if (n[n.length()-2]==n[n.length()-1])
  {
    return doubleDollars(n.substr(0,n.length()-2))+n[n.length()-1];
    cout<<"hi";
  }else if (n[n.length()-2]!=n[n.length()-1])
  {
    return doubleDollars(n.substr(0,n.length()-2))+n[n.length()-1];
    cout<<"hi";
  }
  //if (n[n.length()-1]==n[n.length()]) cout<<"\n$";
  //return ""; //
}

string tester(string n){n.substr(0,n.length()); n.substr(0,n.length()-1);}

int main() {
  cout << endl << doubleDollars("goodbye");
  cout << endl << tester("hello");
  return 0;
}