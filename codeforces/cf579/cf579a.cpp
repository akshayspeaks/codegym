#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}

int main() {
  int t;
  cin>>t;
  cout<<countSetBits(t);
  return 0;
}