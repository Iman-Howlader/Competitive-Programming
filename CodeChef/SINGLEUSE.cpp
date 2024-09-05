#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,H,X,Y,ans;
    cin>>t;
    while(t--)
    {
        cin>>H>>X>>Y;
        if(H%Y==0)
        {
            ans=H-Y;
            if(ans==0)
                ans=1;
        }

        else
        {
            H=(H-Y);
            ans=1+ceil((double)H/X);
        }
        cout<<ans<<endl;

    }
}
