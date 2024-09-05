#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        if(n<3)
            cout<<"0\n";
        else
        {
            if(n%2==0)
                cout<<(n/2)-1<<endl;
            else
                cout<<n/2<<endl;

        }
    }  
}
int main () {

        fast;
        solve();
        return 0;
   
}
