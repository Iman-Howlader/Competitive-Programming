#include <bits/stdc++.h>


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int t,count;
    long long int n;
    bool flag;
    cin>>t;
    while (t--)
    {
        count=0;
        flag=true;
        cin>>n;
        while (n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                count++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                count++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                count++;
            }
            else{
                flag=false;
                break;
            }
            
        }
        if(flag==false)
        cout<<"-1\n";
        else{
            cout<<count<<endl;
        }
        
    }

    
}
int main () {

        fast;
        solve();
        return 0;
   
}
