#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin>tie(NULL);
    int t,X,D1,D2,res;

    cin>>t;
    while(t--)
    {
        cin>>X>>D1>>D2;
        res= ceil((X*D1)/(double)D2);
        cout<<res<<"\n";
    }
}
