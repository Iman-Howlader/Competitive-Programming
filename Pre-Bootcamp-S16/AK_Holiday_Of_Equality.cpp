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
    int n,maxx,sum=0;
    cin>>n;
    vector<int>vect(n);
    for(int i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    maxx= *max_element(vect.begin(),vect.end());
    for(int i=0;i<n;i++)
    {
        if(vect[i]<maxx)
        sum+=(maxx-vect[i]);
    }
    cout<<sum;

}
int main () {

        fast;
        solve();
        return 0;
   
}
