#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false),cin.tie(0);
using namespace std;
int main()
{
    faster;

    long long int t,n,k;
    bool flag;
    cin>>t;
    while(t--)
    {
        flag=true;
        cin>>n>>k;
        if(n%2==0 || n%k==0)
            cout<<"YES\n";
        else
        {
            while(n>k)
            {
                n=n-2;
                if(n%2==0)
                {
                    cout<<"YES\n";
                    flag=false;
                    break;
                }
                else if(n%k==0)
                {
                    cout<<"YES\n";
                    flag=false;
                    break;
                }
            }
            if(flag)
                cout<<"NO\n";
        }
    }
}
