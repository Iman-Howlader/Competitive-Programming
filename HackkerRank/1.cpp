#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,q,L,R,ans;
    cin>>n;
    vector<int>arr(n);
    for(int i=1; i<=arr.size(); i++)
    {
        cin>>arr[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>L>>R;
        ans=arr[L]*arr[R];
        cout<<ans<<"\n";

    }
}
