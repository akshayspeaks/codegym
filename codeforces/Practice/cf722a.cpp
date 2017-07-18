#include <bits/stdc++.h>

using namespace std;

int main()
{
	int format;
	string time;
	cin>>format;
	cin>>time;
	int mn=atoi(time.substr(3,2).c_str());
	if (mn>=60)
		time.replace(3,1,1,'0');
	int hr=atoi(time.substr(0,2).c_str());
	switch(format)
	{
		case 12:
		if(hr>12)
		{
			if(hr%10==0)
			{
				time.replace(0,1,1,'1');
			}
			else
			time.replace(0,1,1,'0');
		}
		else if(hr==0)
		{
			time.replace(0,1,1,'1');	
		}
		break;
		case 24:
		if(hr>23)
		{
			time.replace(0,1,1,'0');	
		}
		break;
	}
	cout<<time<<endl;
	return 0;
}