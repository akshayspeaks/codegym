#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int t,n,i,match,winnings[1003],win_ele,ans;
    char corr[1003],chef[1003];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        match=0;
        scanf("\n%s",corr);
        scanf("\n%s",chef);
        for(i=0;i<n;++i)
        {
            if(corr[i]==chef[i])
                match++;
        }
        for(i=0;i<=n;++i)
        {
            cin>>win_ele;
            winnings[i]=win_ele;
        }
        /*for (i=0;i<=n;i++)
        {
            cout<<winnings[i]<<" ";
        }*/
        if (match==n)
            ans=(winnings[n]);
        else
            ans=*max_element(winnings,winnings+match+1);
        cout<<ans<<endl;
        //winnings.clear();
    }
    return 0;
}
