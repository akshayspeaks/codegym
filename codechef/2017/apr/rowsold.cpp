#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long int i,len,diff,ans;
    scanf("%d\n",&t);
    vector<long long int>width;
    char st[100005];
    while(t--){
        scanf("%s\n",&st);
        ans=diff=0;
        len=strlen(st);
        for(i=0;i<len;i++){
            if(st[i]=='1'){
                width.push_back(diff);
                diff=0;
            }
            else
                diff++;
        }
        if(diff!=0) width.push_back(diff);

        for(vector<long long int>::iterator it=width.begin()+1;it!=width.end();++it){
            if((*it)==0)
                continue;
            ans+=(*it+1)*(it-width.begin());
        }
        cout<<ans<<endl;
        width.clear();
    }
    return 0;
}
