#include <bits/stdc++.h>
using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"

void solve(){
    int n;
cin>>n;
for(int i=0;i<n;i++)
{
double  a;
double PI=acos(-1);
cin>>a;
double w=(6*a)/10;
double r=(2*a)/10;
cout<<fixed<<setprecision(2)<<(PI*r*r)<<" ";
cout<<fixed<<setprecision(2)<<(a*w)-(PI*r*r)<<endl;
}
}
int main () {

        fast;
        solve();
        return 0;
   
}
