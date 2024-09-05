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
    int res=0;
    int arr[101][101] = {0};
    int a, b, c, d;
    testcase
    {
        cin >> a >> b >> c >> d;
        for (int i = a; i < b; i++)
        {
            for (int j = c; j <d; j++)
            {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i <=100; i++)
    {
        for (int j = 0; j <=100; j++)
        {
            if(arr[i][j]) res++;  
            
        }
       
    }
    cout<<res<<nl;
}
    int main()
    {

        fast;
        solve();
        return 0;
    }
