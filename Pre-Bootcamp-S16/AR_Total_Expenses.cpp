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
    int n,A,B;
    double bill;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A>>B;
        if(A>1000){
            bill=A*B-(A*B*0.1);
        }
        else{
            bill=A*B;
        }
        cout<<fixed<<setprecision(6)<<bill<<endl;

    }

}
int main () {

        fast;
        solve();
        return 0;
   
}
