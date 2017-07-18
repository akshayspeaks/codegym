#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{	
	int t;
	double t1,t2,T1,T2;
	double prob;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf%lf",&T1,&T2,&t1,&t2);
		if(T1>T2)
		{
			double temp=T2;
			T2=T1;
			T1=temp;
			temp=t2;
			t2=t1;
			t1=temp;
		}
		if(T1+t1<T2)
		prob=(T1*(T1+t1));
		else
		prob=T1*T2;
		double ar1,ar2,shar;
		if(t2>T1)
		{
			ar1=0;
		}
		else
		ar1=0.5*(T1-t2)*(T1-t2);
		if((t1+T1)<=T2)
		{
			ar2=0.5*T1*T1;
		}
		else if (t1>=T2)
		ar2=0;
		else
		//ar2=0.5*((t1+T1)-T2)*((t1+T1)-T2);
		ar2=0.5*(T2-t1)*(T2-t1);
		//printf("%lf\t",prob);
		shar=prob-(ar1+ar2);
		prob=T1*T2;
		prob=shar/prob;
		printf("%lf\n",prob);
	}
	
	return 0;
}