#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int t,hr,mn;
    double a,j,fac=1.0/120.0;
    //double a,start,stop,j;
    //int offset[7]={0,-30,-60,-90,-120,-150,-180};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&a);
        for(hr=0;hr<12;hr++)
        {
            //start=offset[hr];
            //stop=start+180;
            for(mn=0;mn<60;++mn)
            {
                j=abs((60*hr - 11*mn)/2.0);
                if(abs(j-a)<fac || abs(360-j-a)<fac)//
                {
                    cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<mn<<endl;
                    /*if (!(mn==0 && (hr==0 || hr==6)))
                    {
                        if(hr==0)
                        hr=11;
                        else if(hr==6)
                        hr=5;
                        else
                        hr=12-hr;
                        if (mn!=0)
                        mn=60-mn;
                        cout<<setw(2)<<setfill('0')<<hr<<":"<<setw(2)<<setfill('0')<<mn<<endl;
                    }*/
                    //hr=7;
                    break;
                }
            }
        }


    }
    return 0;
}
