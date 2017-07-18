#include <bits/stdc++.h>

using namespace std;
#define ict int t; cin>>t; while (t--)


int main()
{
	ict
	{
		int n;
		vector<int> resStack;
		cin>>n;
		for (int i=0;i<n;i++)
		{
			int candyCount;
			cin>>candyCount;
			vector<int> arr(6);
			for(int temp=0;temp<candyCount;temp++)
			{
				int candy;
				cin>>candy;
				arr[candy-1]++;
			}

			sort(arr.begin(),arr.end());

			resStack.push_back(candyCount+(4*arr[0])+(2*(arr[1]-arr[0]))+(arr[2]-arr[1]));
		}
		vector<int>::iterator it=max_element(resStack.begin(),resStack.end());
		if(count(resStack.begin(),resStack.end(),*it)>1)
		{
			cout<<"tie"<<endl;
		}
		else if(it==resStack.begin())
		{
			cout<<"chef"<<endl;
		}
		else
		{
			cout<<distance(resStack.begin(),it)+1<<endl;
		}
	}

	return 0;
}