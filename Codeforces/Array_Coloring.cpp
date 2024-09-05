#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nl "\n"

void solve(){
   int t;
   cin>>t;
   while (t--)
   {
    int n,s=0;
     cin>>n;
     vector<int>a(n);
     for (size_t i = 0; i <n; i++)
     {
        cin>>a[i];
        s+=a[i];
     }
     if(s%2==0)
     {
        cout<<"YES\n";
     }
     else
     {
        cout<<"NO\n";
     }
     
     
   }
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
