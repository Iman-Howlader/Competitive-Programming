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
    int N,K,a,count=0;
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
        cin>>a;
        if(a%K==0)
        count++;
    }
    cout<<count;
}
int main () {

        fast;
        solve();
        return 0;
   
}
