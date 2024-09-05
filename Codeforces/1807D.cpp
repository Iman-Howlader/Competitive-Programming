#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);

    long long t,n,q,l,r,k,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<int>vect(n+1);
        vector<int>temp(n+1);
        for(int i=1; i<vect.size(); ++i)
        {
            cin>>vect[i];
        }
        int prefix[n+1];
        prefix[1]=vect[1];
        for(int i=2; i<=n; i++)
        {
            prefix[i]=prefix[i-1]+vect[i];
        }
        while(q--)
        {
            sum=0;
            cin>>l>>r>>k;
            sum= prefix[l-1]+prefix[r+1]+(r-l+1)*k;
            cout<<sum<<endl;
        }


    }
}


/**









if(pre[n]%2==0)
                    cout<<"NO\n";
            else
                cout<<"YES\n";
                */
