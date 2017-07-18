#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}


bool isValid(int n)
{
	int a=n,i;
	while(!(n&1))
	{
		n/=2;
	}
	while(n%3==0)
	{
		n/=3;
	}
	for(i=5;i<sqrt(n);i+=2)
	{
		if(n%i==0)
		{
			if((i%4==1)&&(a%i)==0)
			{
				return true;
			}
			while(n%i==0)
			{
				n/=i;
			}
		}
	}
	if((n>3) && (n%4==1) && (a%n==0))
	{
		return true;
	}
	return false;
}

int main() {
	
	int t,n;
	t=read_int();
	while(t--)
	{
		n=read_int();
		if(isValid(n))
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	return 0;
}