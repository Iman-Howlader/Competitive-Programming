#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false),cin.tie(0);
using namespace std;
int main()
{
    faster;
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        if(n<3)
            cout<<"0\n";
        else
        {
            if(n%2==0)
                cout<<(n/2)-1<<endl;
            else
                cout<<n/2<<endl;

        }
    }
}
