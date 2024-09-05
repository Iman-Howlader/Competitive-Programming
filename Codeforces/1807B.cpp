#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,eve=0,odd=0;

    cin>>t;
    while(t--)
    {
        eve=0;
        odd=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                eve+=arr[i];
            else
                odd+=arr[i];
        }
        if(eve>odd)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
