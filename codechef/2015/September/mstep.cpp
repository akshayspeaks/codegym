#include <iostream>
#include <cstdio>
#include <map>
#include <cstdlib>
using namespace std;

int main()
{

    int t,n,i,j,ele;
    cin>>t;
    while(t--)
    {
        map<int, pair<int,int> > mymap;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&ele);
                pair <int,int> p;
                p=make_pair(i,j);
                mymap.insert(make_pair(ele,p));
            }
        }
        map<int,pair<int,int> >::iterator iter1=mymap.find(1);
        map<int,pair<int,int> >::iterator iter2;
        long long int sum=0;
        for(i=1;i<n*n;i++)
        {
            iter2=mymap.find(i+1);
            //cout<<(*iter2).first<<" ===> "<<(*iter2).second.first<<","<<(*iter2).second.second<<endl;
            sum+=abs((*iter2).second.first-(*iter1).second.first);
            sum+=abs((*iter2).second.second-(*iter1).second.second);
            iter1=iter2;
            //cout<<"sum at "<<i+1<<" : "<<sum<<endl;
        }
        printf("%lld\n",sum);

    }
    return 0;
}
