#include <bits/stdc++.h>

using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int n,count=0;
    cin>>n;
    vector<int>vect(n);
    for(int i=1;i<=n;i++)
     cin>>vect[i] ;
                                  
    for(int i=1;i<=n;i++)
    {
        if(vect[i]!=i)
        count++;

    }
    if(count>2)
    cout<<"NO"<<endl;
    else
    cout<<"YES\n";
   
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
