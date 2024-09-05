#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin>>d;
    if(d%5==0)
    {
        d=d/5;

    }
    else
    {
        d=d/5+1;
    }
    cout<<d;
}
