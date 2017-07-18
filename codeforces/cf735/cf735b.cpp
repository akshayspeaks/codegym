#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<int> v;
	int n,n1,n2;
	cin>>n>>n1>>n2;
	for (int i=0;i<n;i++)
	{
		int el;
		cin>>el;
		v.push_back(el);
	}
	if(n1>n2)
	{
		int t=n1;
		n1=n2;
		n2=t;
	}
	sort(v.begin(),v.end(),greater<int>());
	v.erase(v.end()-(n-(n1+n2)),v.end());
	float soln=((float)accumulate(v.begin(),v.begin()+n1,0))/(float)n1;
	soln+=((float)accumulate(v.begin()+n1,v.end(),0))/(float)n2;
	std::cout << std::fixed;
    std::cout << std::setprecision(8);
	cout<<soln<<endl;

	return 0;
}