#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    int n,cnt=0;
    cin>>n;
  vector<int>a(n+1);
  vector<int>b; 
  for (int i = 0; i <n; i++)
  {
        cin>>a[i];
  }
  for (int i = 0; i <n; i++)
  {
    cnt++;
    b.push_back(cnt);
    if(a[i]>a[i+1])
    {
        cnt=0;
    }
  }
  int x=*max_element(b.begin(),b.end());
  cout<<x<<nl;
  
}
int main () {

        fast;
        solve();
        return 0;
   
}
