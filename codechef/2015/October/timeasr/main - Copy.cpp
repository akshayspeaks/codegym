#include <bits/stdc++.h>

using namespace std;
void printMirror(pair<int,int> p)
{
    int h,m;
    h=11-p.first;
    m=60-p.second;
    if(p.second==0)
    {
        h++;
        m=0;
    }
    cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<endl;
}
int main()
{
    freopen("input.txt","r",stdin);
    int t,hr,mn,offset;
    double a,fac,pres=1.0/120.0;
    vector< pair<int,int> > soln;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%lf",&a);
        if(a==180)
        {
            soln.push_back(make_pair(6,0));
        }
        else if(a==0)
        {
            soln.push_back(make_pair(0,0));
        }
        else
        {

            for(hr=0,offset=0;hr<6;hr++,offset+=30)
            {
                if(a==offset)
                {
                    soln.push_back(make_pair(hr,0));
                }
                else if(a<offset)
                {
                    fac=abs(remainder(offset-(180-a),5.5));
                    if(fac<=pres)
                    {
                        mn=round((offset-(180-a))/5.5);
                        soln.push_back(make_pair(hr,mn));
                    }
                    fac=abs(remainder(offset+a,5.5));
                    if(fac<=pres)
                    {
                        mn=round((offset+a)/5.5);
                        soln.push_back(make_pair(hr,mn));
                    }
                }
                else
                {
                    fac=abs(remainder(offset+a,5.5));
                    if(fac<=pres)
                    {
                        mn=round((offset+a)/5.5);
                        soln.push_back(make_pair(hr,mn));
                    }
                    fac=abs(remainder(offset-(180-a),5.5));
                    if(fac<=pres)
                    {
                        mn=round((offset-(180-a))/5.5);
                        soln.push_back(make_pair(hr,mn));
                    }
                }
            }
        }
        vector<pair<int,int> >::iterator it=soln.begin();
        for(;it<soln.end();++it)
        {
            cout<<setw(2)<<setfill('0')<<(*it).first<<":"<<setw(2)<<setfill('0')<<(*it).second<<endl;
        }
        for(it=soln.end()-1;it>=soln.begin();--it)
        {
            //cout<<(*it).first<<(*it).second<<endl;
            if(a==0 || a==180)
            {

            }
            else printMirror(*it);
        }
        soln.clear();

    }
    return 0;
}
