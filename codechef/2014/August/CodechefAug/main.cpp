#include <iostream>

using namespace std;

int main()
{
    int T,n,k,a,reps;
    cin>> T;
    while(T--)
    {
        cin>> n >> k;
        reps=n-k;
        for(int i=0;i<n;i++)
        {
            cin >> a;
            if (a%2!=0)
                reps--;
        }
        if(k==0&&reps==n)
            cout<< "NO" <<endl;
        else if(reps>=0)
            cout <<"YES" <<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}
