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
    int a,b,c;
    while(true)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
          return;

        if((a*a + b*b ==c*c) || (a*a + c*c ==b*b) || (b*b + c*c ==a*a))
        cout<<"right\n";
        else
        cout<<"wrong\n";

    }
}
int main () {

        fast;
        solve();
        return 0;
   
}
