#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    optimize();
    int t,a,b,k=1;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {
            if(isPrime(i))
            {
                count++;
            }
        }
        cout<<"Case "<<k<<": "<<count<<"\n";
        k++;
    }

}
