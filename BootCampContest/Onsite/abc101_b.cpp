#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    if(temp%sum==0)
        cout<<"Yes";
    else
        cout<<"No";

}


