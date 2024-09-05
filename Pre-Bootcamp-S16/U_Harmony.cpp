#include <bits/stdc++.h>
/*
Problem: 
Link   : 
solution by: Iman Howlader
Gmail   : imanhowlader321@gmail.com
Github  : https://github.com/Iman-Howlader
*/


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int a,b,x;
    cin>>a>>b;
    x=(a+b)/2;
    if(abs(a-x)==abs(b-x))
    cout<<x;
    else
    cout<<"IMPOSSIBLE";
}
int main () {

        fast;
        solve();
        return 0;
   
}
