#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
#include <stdio.h>
#include <fstream>
using namespace std;


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int t,n,x,y,i;
    pair <int, pair<int,int> > top;
    pair <int, pair<int,int> > bottom;
    pair <int, pair<int,int> > left;
    pair <int, pair<int,int> > right;
    cin >> t;
    while(t--)
    {
        top.first=bottom.first=left.first=right.first=0;
        top.second.second=-1000000000;
        bottom.second.second=1000000000;
        left.second.first=1000000000;
        right.second.first=-1000000000;

        top.second.first=-1000000000;
        bottom.second.first=1000000000;
        left.second.second=-1000000000;
        right.second.second=1000000000;

        scanf("%d",&n);
        n++;
        for(i=1;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            if(x>=right.second.first)
            {
                //right.first=i;
                if(x>right.second.first)
                {
                    right.second.second=y;
                    right.first=i;
                }
                else if(right.second.second>y)
                {
                    right.first=i;
                    right.second.second=y;
                }
                right.second.first=x;
            }
            if(x<=left.second.first)
            {
                //left.first=i;
                if(x<left.second.first)
                {
                    left.second.second=y;
                    left.first=i;
                }
                else if(left.second.second<y)
                {
                    left.second.second=y;
                    left.first=i;
                }
                left.second.first=x;
            }

            if(y>=top.second.second)
            {
                if(y>top.second.second)
                {
                    top.second.first=x;
                    top.first=i;
                }
                else if(top.second.first<x)
                {
                    top.second.first=x;
                    top.first=i;
                }
                top.second.second=y;
            }
            if(y<=bottom.second.second)
            {
                //bottom.first=i;
                if(y<bottom.second.second)
                {
                    bottom.second.first=x;
                    bottom.first=i;
                }
                else if(bottom.second.first>x)
                {
                    bottom.second.first=x;
                    bottom.first=i;
                }
                bottom.second.second=y;
            }
        }

        ///PRINTING_TESTING_BULSHITTING///
        /*
        cout<<"Top: "<<top.second.first<<" "<<top.second.second<<" at position: "<<top.first<<endl;
        cout<<"Right: "<<right.second.first<<" "<<right.second.second<<" at position: "<<right.first<<endl;
        cout<<"Bottom: "<<bottom.second.first<<" "<<bottom.second.second<<" at position: "<<bottom.first<<endl;
        cout<<"Left: "<<left.second.first<<" "<<left.second.second<<" at position: "<<left.first<<endl;
        */
        if (top.second.second==left.second.second)
        {
            printf("%d\n%d SE",1,left.first);
        }
        else if (left.second.first==bottom.second.first)
        {
            printf("%d\n%d NE",1,bottom.first);
        }
        else if (bottom.second.second==right.second.second)
        {
            printf("%d\n%d NW",1,right.first);
        }
        else if (right.second.first==top.second.first)
        {
            printf("%d\n%d SW",1,top.first);
        }
        else if(top.second.second==bottom.second.second)
        {
            printf("%d\n%d NE",1,left.first);
        }
        else if(left.second.first==right.second.first)
        {
            printf("%d\n%d NE",1,bottom.first);
        }
        else if(top.second.first<=bottom.second.first)
        {
            printf("%d\n%d SE\n%d NW",2,top.first,bottom.first);
        }
        else
        {
            printf("%d\n%d SW\n%d NE",2,top.first,bottom.first);
        }
        cout<<endl;
    }
    return 0;
}
