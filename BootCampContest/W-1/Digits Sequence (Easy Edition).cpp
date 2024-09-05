#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    for(int i=1;i<=10000;i++)
    {
        s=s+(to_string(i));
    }
    cin>>n;
    cout<<s[n-1];
}


