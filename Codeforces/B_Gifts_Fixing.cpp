#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  testcase{
    int n;
    long long int ans=0;
    cin>>n;
    vector<long long int>a(n);
    vector<long long int>b(n); 
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i <n; i++)
    {
        cin>>b[i];
    }
    int x=*min_element(a.begin(),a.end());
    int y=*min_element(b.begin(),b.end()); 
    for (int i = 0; i < n; i++)
    {
        ans+=max(a[i]-x,b[i]-y);
       
    }
    cout<<ans<<nl;
    

  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
