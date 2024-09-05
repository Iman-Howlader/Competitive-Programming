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
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
  
  

}
int main () {

        fast;
        solve();
        return 0;
   
}
