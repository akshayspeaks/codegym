#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen ("input.txt", "r", stdin);
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        vector<int> soln;
        vector<int>::iterator it;
        scanf("%d",&n);
        int temp;
        scanf("%d",&temp);
        soln.push_back(temp);
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&temp);
            /*if(temp<*(soln.end()-1))//
            {
                it=soln.begin();
                while(temp>=*it)
                {
                    it++;
                }
                *it=temp;
            }*/
            it=upper_bound(soln.begin(),soln.end(),temp);
            if(it==soln.end())
                soln.push_back(temp);
            else
                *it=temp;
        }
        cout<<soln.size()<< " ";
        it=soln.begin();
        for(;it<soln.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}
