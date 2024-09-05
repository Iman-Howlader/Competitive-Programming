#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,k,n,result=0;
    cin>>t>>k;
    while(t--)
    {
        cin>>n;
        if(n%k==0)
        {
            result++;
        }

    }
    cout<<result<<"\n";

    return 0;
}

