#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  testcase{
    long long int n;
    cin>>n;
    bool flag=false;
   int cnt=0;
    while (n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            cnt++;
        }
        else if(n%3==0)
        {
            n=2*n/3;
            cnt++;
        }
        else if(n%5==0)
        {
            n=4*n/5;
            cnt++;
        }
        else 
        {
            flag =true;
            break;
        }
    }
    if(flag) cout<<"-1"<<nl;
    else cout<<cnt<<nl;
    

  }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
