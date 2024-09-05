#include<bits/stdc++.h>
using namespace std;
void isprime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<"It is not a prime word."<<endl;
            return;
        }
    }
    cout<<"It is a prime word."<<endl;
}
int main()
{
    string s;
    int ans;
    while(cin>>s)
    {
        ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>96 && s[i]<123)
                ans+=(s[i]-96);
            if(s[i]>64 && s[i]<91)
                ans+=(s[i]-38);
        }
        isprime(ans);
    }
}

