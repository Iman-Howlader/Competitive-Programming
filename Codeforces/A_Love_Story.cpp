#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    string s,s2="codeforces";
    int cnt;
  testcase{
    cin>>s;
    cnt=0;
    for (int i = 0; i <s.size(); i++)
    {
       if(s[i]!=s2[i])
       cnt++;
    }
    cout<<cnt<<nl;

  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
