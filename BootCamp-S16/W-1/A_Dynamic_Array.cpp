#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
    int n,t,lstAns=0;
    cin>>n>>t;
    int i=0,j=0;
    vector<vector<int>>arr(n);
    while (t--)
    {
        int q,x,y,idx;
        cin>>q>>x>>y;
        if(q==1)
        {
            idx=(x^lstAns)%n;
            arr[idx].push_back(y);

        }
        else
        {
            idx=(x^lstAns)%n;
            lstAns=arr[idx][y%(arr[idx]).size()];
            cout<<lstAns<<"\n";
        }

    }
    
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
