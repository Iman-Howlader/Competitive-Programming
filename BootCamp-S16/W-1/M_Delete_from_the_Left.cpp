#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  string s1,s2;
  cin>>s1>>s2;
  int n=min(s1.size(),s2.size());
  int x=s1.size()-1;
  int y=s2.size()-1;
  for (int i =0; i <n; i++)
  {
    if(s1[x--]==s2[y--])
    {
        s1.pop_back();
        s2.pop_back();
    }
    else break;
  }
  cout<<s1.size()+s2.size()<<nl;
}
int main () {

        fast;
        solve();
        return 0;
   
}
