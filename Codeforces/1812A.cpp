#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    if(count==0 || count ==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
