#include <iostream>
#include <cmath>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int i,k,s,ai,bi,m;
    scanf("%d%d%d",&i,&k,&s);
    scanf("%d%d",&ai,&bi);
    double t1,t2,ak,bk,ans;
    if(k>i)
    {
        m=k-i;
        if(m%2==0)
        {
            t1=(pow(3,(m/2)+1)-1)/2.0;
            ak=pow(2,(m/2)+1)*(t1)*ai;
            bk=pow(2,(m/2)+1)*(t1)*bi;
        }
        else
        {
            t1=sqrt(3)*((pow(-sqrt(3),m+1)-1)/(-sqrt(3)-1));
            t2=sqrt(3)*((pow(sqrt(3),m+1)-1)/(sqrt(3)-1));
            ak=pow(2,((int)(m/2)+1))*sqrt(2)*((t1*ai)+(t2*bi));
            bk=pow(2,((int)(m/2)+1))*sqrt(2)*((t2*ai)-(t1*bi));
        }
    }
    else if(k==i)
    {
        ak=ai;
        bk=bi;
    }
    //printf("%lf %lf\n",ak,bk);
    ans=(ak+bk)/(pow(2,s));
    printf("%f",ans);
    //cout<<ans;

    return 0;
}
