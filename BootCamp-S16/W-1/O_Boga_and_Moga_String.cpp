#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  string s,s1,s2;
  int x=0,y=0;
  cin>>s1>>s2;
  for (int i = 0; i <s1.size()+s2.size(); i++)
  {
    if(i%2==0)
    {
        s.push_back(s1[x++]);
    }
    else
    {
        s.push_back(s2[y++]);
    }
  }
  cout<<s<<nl;
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
