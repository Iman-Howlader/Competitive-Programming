#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a(4);
    for(int i=0; i<4; i++)
    {
        cin>>a[i];
    }
    int x=*max_element(a.begin(),a.end());
    for(int i=0;i<4;i++)
    {
        if(a[i]==x)
        {
            a[i]=-1;
            break;
        }
    }

    int y=*max_element(a.begin(),a.end());
    int b=x-y,c,d;
    for(int i=0;i<4;i++)
    {
        if(a[i]!=-1)
        {
            c=a[i]-b;
            break;
        }
    }
    d=x-(b+c);
    cout<<b<<" "<<c<<" "<<d;

}


