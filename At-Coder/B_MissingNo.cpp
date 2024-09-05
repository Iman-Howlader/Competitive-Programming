#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int n;
  cin>>n;
  vector<int>a(n);
  for (int i = 0; i <n; i++)
  {
        cin>>a[i];
  }
  sort(a.begin(),a.end());
  int x=a[0];
  int y=a[a.size()-1];
  int z=0;
  for(int i=x;i<=y;i++)
  {
    if(a[z++]!=i)
    {
        cout<<i<<nl;
        break;
    }
  }
  
}
int main () {

        fast;
        solve();
        return 0;
   
}
