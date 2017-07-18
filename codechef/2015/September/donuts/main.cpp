#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int t,m,n,i,ele,oc;
    cin >> t;
    vector<int> arr;
    while(t--)
    {
        oc=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&ele);
            if(ele==1)
                oc++;
            else
                arr.push_back(ele);
        }
        //vector<int>::iterator it=arr.end();

        /*while(it!=arr.end())
        {
            printf("%d ",(*it));
            ++it;
        }*/
        long long cuts=0;
        //int temp;
        if(arr.empty() || oc>=arr.size())
        {
            cuts=int(m/2);
            //cout<<"kyun nai chal raha bhenchod"<<endl;
        }
        else
        {
            sort(arr.begin(),arr.end());

            cuts+=oc;
            m-=2*oc;
            while(m>1)
            {
                if(m>arr[0])
                {
                    m-=arr[0]+1;
                    cuts+=arr[0];
                    arr.erase(arr.begin());
                }
                else{
                    cuts+=m-1;
                    break;
                }

            }
        }
        cout<<cuts<<endl;
        arr.clear();
    }
    return 0;
}
