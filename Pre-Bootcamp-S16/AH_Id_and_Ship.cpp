#include <bits/stdc++.h>

using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int n;
    char k;
    cin>>n;
    while (n--)
    {
        cin>>k;
        if(k=='B'||k=='b')
        cout<<"BattleShip\n";
         if(k=='C'||k=='c')
        cout<<"Cruiser\n";
        if(k=='D'||k=='d')
        cout<<"Destroyer\n";
         if(k=='F'||k=='f')
        cout<<"Frigate\n";
        
    }
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
