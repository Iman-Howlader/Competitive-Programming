#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    deque<int> mydeque;
    deque<int> mydeque2;

    while(t--)
    {
        cin>>a>>b;
        for(int i=0;i<a;i++)
        {
            cin>>mydeque2[i];

        }
        for(int i=0;i<mydeque2.size();i++)
        {
            c=max(mydeque2.begin(),mydeque2.end());
            cout<<c;

        }


    }

}
