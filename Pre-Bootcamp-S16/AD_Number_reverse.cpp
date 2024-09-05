#include <bits/stdc++.h>

using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
   long long int n,x,y=0;
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        y=y*10+x;
        n=n/10;
    }
    cout<<y;
}
int main () {

        fast;
        solve();
        return 0;
   
}
