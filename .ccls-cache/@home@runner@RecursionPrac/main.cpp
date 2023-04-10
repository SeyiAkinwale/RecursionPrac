#include <iostream>
#include <string>
using namespace std;

string doubleDollars(string n) {
  //cout<<endl<<n.length();
  //cout<<endl<<n.substr(0,n.length()-2);
  if (n[n.length()-1]==n[n.length()]) cout<<"\n$";
  return ""; //
}

int main() {
  cout << endl << doubleDollars("goodbye");
  return 0;
}