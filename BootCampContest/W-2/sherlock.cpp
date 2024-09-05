#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false),cin.tie(0);
#define endl "\n";
using namespace std;
int main()
{
    faster;
    long t,n,count,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        for( i=1; i*i<n; i++)
        {
            if(n%i==0)
            {
                if(i%2==0)
                    count++;
                if(n%i!=i)
                {
                    if((n/i)%2==0)
                        count++;
                }
            }

        }
        if(i*i==n && i%2==0)
            count++;
        cout<<count<<endl;
    }
}





