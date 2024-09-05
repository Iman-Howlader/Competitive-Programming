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
    int n,a,b,c,maxx,minn;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;

        maxx=max(a,b);
        maxx=max(maxx,c);
        minn=min(a,b);
        minn=min(minn,c);

        if(a!=maxx && a!=minn)
        cout<<a<<endl;
        else if(b!=maxx && b!=minn)
        cout<<b<<endl;
        else
        cout<<c<<endl;
    }

}
int main () {

        fast;
        solve();
        return 0;
   
}
