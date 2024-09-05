#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define nl "\n"

void solve()
{

    map<string,int> p;
    p.insert({"tourist", 3858});
    p.insert({"ksun48", 3679});
    p.insert({"Benq", 3658});
    p.insert({"Um_nik", 3648});
    p.insert({"apiad", 3638});
    p.insert({"Stonefeang", 3630});
    p.insert({"ecnerwala", 3613});
    p.insert({"mnbvmar", 3555});
    p.insert({"newbiedmy", 3516});
    p.insert({"semiexp", 3481});
    string s;
    cin>>s;
    cout<<p[s]<<nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
