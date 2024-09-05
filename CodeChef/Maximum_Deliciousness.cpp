#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int n,b,c;
  testcase{
    cin>>n>>b>>c;
    vector<int>a(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    int cnt=0;
    for (int i = c-1; i <a.size(); i+=b)
    {
       cnt+=a[i];
    }
    cout<<cnt<<nl;
  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
