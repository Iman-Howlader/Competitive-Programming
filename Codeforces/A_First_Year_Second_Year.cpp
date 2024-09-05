#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a,b;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        b=(n-x)/2;
        a=n-b;
        cout<<a<<" "<<b<<endl;
    }
    
}