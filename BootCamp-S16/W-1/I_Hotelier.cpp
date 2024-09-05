#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define nl "\n"

void solve()
{
    string s(10,'0');
    int n;
    char ch;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
       cin>>ch;
       if(ch=='L')
       {
         for (int i = 0; i <10; i++)
         {
            if(s[i]=='0')
            {
                 s[i]='1';
                 break;
            }
           
         }
            
       }
       else if (ch=='R')
       {
        for (int i = 9; i >=0; i--)
         {
            if(s[i]=='0')
            {
                 s[i]='1';
                 break;
            }
            
         } 
       }
       else
       {
            int x= ch-'0';
            s[x]='0';
       } 
    }
    
    cout <<  s<< nl;
}
int main()
{

    fast;
    solve();
    return 0;
}
