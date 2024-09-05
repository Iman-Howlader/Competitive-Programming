#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int n,day=1;
  long long int sum=0;
  cin>>n;
  while (sum<n)
  {
     sum+=day;
     day++;
  }
  cout<<day-1<<nl;
}
int main () {

        fast;
        solve();
        return 0;
   
}
