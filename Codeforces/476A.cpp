#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,countt=0;
    cin>>n;
    int p,q;
   while(n--)
   {
       cin>>p>>q;
       if(q-p>=2)
       countt++;
   }
   cout<<countt;
}
