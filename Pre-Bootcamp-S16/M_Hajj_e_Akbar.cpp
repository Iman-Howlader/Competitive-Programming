#include <bits/stdc++.h>
/*
Problem: M_Hajj_e_Akbar
Link   : https://vjudge.net/contest/562328#problem/M
solution by: Iman Howlader
Gmail   : imanhowlader321@gmail.com
Github  : https://github.com/Iman-Howlader
*/


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void solve(){
    string s;
    int i=1;
    while (true)
    {
        cin>>s;
        if(s=="*")
        break;
        else if (s=="Hajj")
        {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        }
        else if (s=="Umrah")
        {
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
            
        }
        i++;    
    }
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
