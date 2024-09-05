#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int prefix[n+1];
    prefix[1]=arr[1];
    for(int i=2;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==14)cout<<prefix[r]<<endl;
        else cout<<prefix[r]-prefix[l-1]<<endl;

    }


}
