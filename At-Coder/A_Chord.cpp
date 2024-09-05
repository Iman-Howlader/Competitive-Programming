#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    string S;
    cin >> S;
    if (S == "ACE" || S == "BDF" || S == "CEG" || S == "DFA" || S == "EGB" || S == "FAC" || S == "GBD")
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{

    fast;
    solve();
    return 0;
}
