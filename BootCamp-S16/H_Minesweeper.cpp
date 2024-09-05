#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define testcase int t;cin>>t;while(t--)
#define nl "\n"

void solve(){
  int m,n,b=1;;
  while (true)
  {
    cin>>m>>n;
    if(m==0&&n==0)
    break;
    else{
        char a[m][n];
        for (int i = 0; i <m; i++)
        {
            for (int j = 0; j <n; j++)
            {
                cin>>a[i][j];
            }
            
        }
        for (int i = 0; i <m; i++)
        {
            for (int j = 0; j <n; j++)
            {
                char x='0';
                if(a[i][j]!='*')
                {
                    if(a[i-1][j-1]=='*' && i>0 && j>0)
                    x++;
                    if(a[i-1][j]=='*' && i>0)
                    x++;
                    if(a[i-1][j+1]=='*' && i>0 && j+1<n)
                    x++;
                    if(a[i+1][j-1]=='*' && i+1<m && j>0)
                    x++;
                    if(a[i+1][j]=='*' && i+1<m)
                    x++;
                    if(a[i+1][j+1]=='*' && i+1<m && j+1<n)
                    x++;
                    if(a[i][j-1]=='*' && j>0)
                    x++;
                    if(a[i][j+1]=='*' && j+1<n)
                    x++;
                    a[i][j]=x;
                }
            }
            
        }
        if(b>1)
        cout<<nl;
        cout<<"Field #"<<b++<<":"<<nl;
        for (int i = 0; i <m; i++)
        {
            for (int j = 0; j <n; j++)
            {
                cout<<a[i][j];
            }
            cout<<nl;           
        }
    }
  }
    
}
int main () {

        fast;
        solve();
        return 0;
   
}
