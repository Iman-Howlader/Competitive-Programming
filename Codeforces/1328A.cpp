#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long int t,a,b,countt;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;

        cout << ((b - a % b) % b) << '\n';
    }
}
