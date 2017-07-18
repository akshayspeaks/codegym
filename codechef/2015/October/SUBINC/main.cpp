#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,ele,n,i;
    long long int ans,seq_len;

    //freopen("input.txt","r",stdin);
    scanf("%d",&t);
    vector<int> arr;
    vector<int>::iterator it;
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&ele);
            arr.push_back(ele);
        }
        seq_len=1;
        int prev=*(arr.begin());
        for(it=arr.begin()+1;it<arr.end();++it)
        {
            if(*it>=prev)
                seq_len++;
            else if(seq_len!=1)
            {
                ans+=(seq_len*(seq_len-1))/2;
                //cout<<"at "<<*it<<endl;
                seq_len=1;
            }
            prev=*it;
        }
        if(seq_len!=1)
            ans+=(seq_len*(seq_len-1))/2;
        ans+=n;
        printf("%lld\n",ans);

        arr.clear();
    }
    return 0;
}
