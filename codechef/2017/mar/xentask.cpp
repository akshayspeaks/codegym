#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x1,y1,xs,ys,i,el;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        x1=y1=xs=ys=0;
        for(i=0;i<n;i++){
            scanf("%d",&el);
            xs+=el;
            if(i%2==0)
                x1+=el;
        }
        for(i=0;i<n;i++){
            scanf("%d",&el);
            ys+=el;
            if(i%2==0)
                y1+=el;
        }
        cout<<min(x1+(ys-y1),y1+(xs-x1))<<endl;
    }
    return 0;
}
