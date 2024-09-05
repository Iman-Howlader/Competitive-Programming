#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    testcase{
        int n,m,x;
        int a=0,b=0;
        string s,s1="left",s2="right";
        cin>>n>>m;
        while (m--)
        {
            cin>>x>>s;
            if(s==s1)
            {
                a+=x;
                
            }
            else if(s==s2)
            {
                b+=x;
            }
        }
        a=ceil((a/100.0)/(double)n);
        b=ceil((b/100.0)/(double)n);
            cout<<a+b<<nl;

    }
}
int main () {

        fast;
        solve();
        return 0;
   
}
