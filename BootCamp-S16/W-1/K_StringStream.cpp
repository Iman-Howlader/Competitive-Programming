#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    string s;
    cin>>s;
    stringstream ss(s);
    int a;
    char ch;
    vector<int>v;
    while (ss>>a>>ch)
    {
        v.push_back(a);
    }
    ss>>a;
    v.push_back(a);
    for (auto it:v)
    {
        cout<<it<<nl;
    }
    
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
