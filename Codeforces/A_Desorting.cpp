#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nl "\n"
#define ll long long int 
void solve(){
   ll n,k,ans;
   cin>>n;
   while (n--)
   {
        cin>>k;
        ans=9223372036854775807ll;
        vector<ll>vect(k);
        for (size_t i = 0; i <k; i++)
        {
            cin>>vect[i];
        }
        
        for (size_t i = 1; i < k; i++)
        {
            if(vect[i]<vect[i-1])
            {
                ans=0;
                break;
            }
            ans=min(ans,((vect[i]-vect[i-1])/2)+1);            
        }
        cout<<ans<<nl;
   }

}
int main () {

        fast;
        solve();
        return 0;
   
}
