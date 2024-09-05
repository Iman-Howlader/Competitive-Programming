#include <bits/stdc++.h>
/*
Problem: P - Relational Operator
Link   : https://vjudge.net/contest/562328#problem/P
solution by: Iman Howlader
Gmail   : imanhowlader321@gmail.com
Github  : https://github.com/Iman-Howlader
*/


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
        cout<<">"<<endl;
        else if(a<b)
         cout<<"<"<<endl;
         else
        cout<<"="<<endl;
    }
}
int main () {

        fast;
        solve();
        return 0;
   
}
