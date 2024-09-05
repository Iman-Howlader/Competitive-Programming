#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,result;
    cin>>t;
    while(t--)
    {
        cin>>n;
        result=n*567;
        result/=9;
        result+=7492;
        result*=235;
        result/=47;
        result-=498;
        result/=10;
        result=abs(result%10);
        cout<<result<<"\n";

    }

    return 0;
}
