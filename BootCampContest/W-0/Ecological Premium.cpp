#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,a,b,c,n,sum;
    while(cin>>t)
    {
        cin>>n;
        sum=0;
        while(n--)
        {
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<"\n";
    }
}
