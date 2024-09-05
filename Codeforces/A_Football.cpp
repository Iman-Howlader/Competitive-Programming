#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  string s;
  bool f=false;
  int x=0,y=0;
  cin>>s;
  for (int i = 0; i <s.size(); i++)
  {
    if(s[i]=='1')
    {
        x++;
    }
    else
    {
        x=0;
    }
    if(x>=7)
    {
        cout<<"YES\n";
        f=true;
        break;
    }
  }
  for (int i = 0; i <s.size(); i++)
  {
    if(s[i]=='0')
    {
        y++;
    }
    else
    {
        y=0;
    }
    if(y>=7)
    {
        cout<<"YES\n";
        f=true;
        break;
    }
  }
  if(!f)  
  cout<<"NO\n";
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
