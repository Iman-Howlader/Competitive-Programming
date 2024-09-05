#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    string s,s1,s3;
    cin>>s>>s1;
    s3=s+s1;
    cout<<s.size()<<" "<<s1.size()<<nl;
    swap(s[0],s1[0]);
    cout<<s3<<nl;
    cout<<s<<" "<<s1<<nl;

    
}
int main () {

        fast;
        solve();
        return 0;
   
}
