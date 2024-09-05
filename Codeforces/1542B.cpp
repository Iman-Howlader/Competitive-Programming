#include<bits/stdc++.h>
using namespace std;
void test(int a,int b)
{
    if(a==b)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    int t,n,a,b,ans=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        ans=1;
        while(ans<n)
        {
            ans=ans*a;
            if(ans==n)
            {
                test(ans,n);
                break;
            }

            ans=ans+b;
            if(ans==n)
            {
                test(ans,n);
                break;
            }

        }

    }
}
