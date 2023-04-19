#include <iostream>
using namespace std;

bool canEqualTarget(const int a[], int size, int target)
{
  if (size==0 && target==0)
    return true;
  else if (size==0 && target !=0)
    return false;
  else if (canEqualTarget(a,size-1,target))
    return true;
  else if (canEqualTarget(a,size-1,target)==false)
    return canEqualTarget(a,size-1,target-a[size-1]);
}

int main() {
  int apples[]={};
  int oranges[]={2,4,8};
  int bananas[]={2, 4, 8, 6};
  cout << endl << canEqualTarget(apples, 0, 0);
  cout << endl << canEqualTarget(apples, 0, 7);
  cout << endl << canEqualTarget(oranges, 3, 10);
  cout << endl << canEqualTarget(bananas, 4, 11);

  return 0;
}