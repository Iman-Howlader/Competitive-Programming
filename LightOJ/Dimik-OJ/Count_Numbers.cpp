/**
*   Author : iman320
*   Created: 2023-11-02 13:24:47
**/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string num;
    int cnt=0;
    while (ss>>num)
    {
        cnt++;
    }
    cout<<cnt<<endl;
}
int main()
{
    // seive();
    int t=1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}
