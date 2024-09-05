#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nl "\n"

void solve(){
   int n,sum=0,test=0;
   cin>>n;
   vector<int>a(n);
   for (int i = 0; i <n; i++)
   {
        cin>>a[i];
        sum+=a[i];
   }
   sum=ceil(sum/2.0);
   for (int i = 0; i <n; i++)
   {
     test+=a[i];
     if(test>=sum)
     {
        
        test=test-a[i];
        test=sum-test;
        cout<<i+1<<" "<<test<<nl;
        break;
     }
   }
   

    
}
int main () {

        fast;
        solve();
        return 0;
   
}
