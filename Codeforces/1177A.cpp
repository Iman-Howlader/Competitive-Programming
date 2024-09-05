#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    for (int i = 1; i <= 10000; i++)
    {
        s=s+to_string(i);
    }

    int n;
    cin>>n;
    cout<<s[n-1];
}
