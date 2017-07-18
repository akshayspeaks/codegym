#include <bits/stdc++.h>

using namespace std;
int get_max_xor(const vector<int>::iterator &start,const vector<int>::iterator &stop,int step)
{
    vector<int>::iterator i,j;
    int val,currxor=*start;
    val=currxor;
    for(i=start+step;i!=stop;i+=step)
    {
        currxor=currxor^(*i);
        if (val<currxor)
            val=currxor;
    }
    printf("Val %d  ",val);
    return val;
}
int main()
{
    freopen ("input.txt", "r", stdin);
    vector<int> arr,lbest,rbest;
    vector<int>:: iterator ii,ij;
    int ans,n,i,ele,sum;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&ele);
        arr.push_back(ele);
    }
    for(ii=arr.begin();ii<arr.end();++ii)
    {
        if(lbest.empty())
        {
            lbest.push_back(get_max_xor(ii,arr.begin()-1,-1));
        }
        else
        {
            lbest.push_back(max(lbest.back(),get_max_xor(ii,arr.begin()-1,-1)));
        }
        if(rbest.empty())
        {
            rbest.push_back(get_max_xor(ii+1,arr.end(),1));
        }
        else
        {
            rbest.push_back(max(rbest.back(),get_max_xor(ii+1,arr.end(),1)));
        }
        printf("FUCK YEAH");
    }
    vector<int>::iterator l,r;
    l=lbest.begin();
    r=rbest.begin();
    ans=0;
    printf("FUCK YEAH");
    for(i=0;i<n;i++)
    {
        sum=*l + *r;
        if(sum>ans)
            ans=sum;
        ++l;
        ++r;
    }
    printf("%d",ans);
    return 0;
}
