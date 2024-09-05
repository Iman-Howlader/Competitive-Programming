#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false),cin.tie(0);
using namespace std;
int main()
{
    faster;
    long n,t,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"0\n";
        }
        else
        {
            sum=0;
            for(int i=1; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    sum+=i;
                    if(n/i != i)
                    {
                        if(i==1)
                            continue;
                        sum+=n/i;
                    }
                }
            }
            cout<<sum<<"\n";
        }

    }
    return 0;
}
