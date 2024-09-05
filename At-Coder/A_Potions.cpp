#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  vector<int>v(a) ;
  for (int i = 0; i <a; i++)
  {
    cin>>v[i];
  }
  for (int i = 0; i <a; i++)
  {
    if(b+v[i]>=c)
    {
        cout<<i+1<<nl;
        return;
    }
  }

  
}
int main () {

        fast;
        solve();
        return 0;
   
}
