#include <iostream>
#include <cmath>
#include <fstream>
#include <stdio.h>
using namespace std;


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int t,m;

    double chef,oth,p;
    cin>>t;
    while(t--)
    {
        cin>>m>>p;
        if(m==1 || p==0)
        {
            chef=1000000000.00;
            oth=0.00;
        }
        else
        {
            //cout<<"gp2 "<<gp2<<endl;
            oth=1000000000*(p*(1-pow(-p,m-1))/(1+p));
            chef=1000000000-oth;
        }
        //cout<<-p<<" to power of "<<m-1<<" is: "<<pow(-p,m-1)<<endl;
        //cout<<(p*(1-pow(-p,m-1))/(1+p))<<endl;

        printf("%.3lf %.3lf\n",chef,oth);
    }
    return 0;
}
