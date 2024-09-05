#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,sum,dif,a,b;
    cin>>t;
    while(t--)
    {
        cin>>sum>>dif;
        b = (sum - dif) / 2;
        a = b + dif;

        if(sum < dif || (a + b) != sum)
            cout<<"impossible"<<"\n";
        else
            cout<<a<<" "<<b<<"\n";
    }
}
