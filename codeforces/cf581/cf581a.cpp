#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	scanf("%d%d",&a,&b);
	cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2;
	return 0;
}