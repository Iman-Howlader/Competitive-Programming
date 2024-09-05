#include <bits/stdc++.h>
/*
Problem: O - Soft Drinking
Link   : https://vjudge.net/contest/562328#problem/O
solution by: Iman Howlader
Gmail   : imanhowlader321@gmail.com
Github  : https://github.com/Iman-Howlader
*/


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int n, k, l, c, d, p, nl,np;
    cin>>n>>k>> l>> c>>d>> p>>nl>> np;
    int a,b,m;
    a= (k*l)/nl;
    b=c*d;
    m=p/np;
    int ans= min(min(a,b),m)/n;
    cout<<ans<<endl;

}
int main () {

        fast;
        solve();
        return 0;
   
}
