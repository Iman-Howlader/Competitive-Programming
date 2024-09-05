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
    int n,sum=0,cnt=0;
    cin >> n;
    vector<int> a(n);
    for (int  i = 0; i <n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.rbegin(),a.rend());
    double abv=(sum/2.0);
    sum=0;
    int j=0;
    
    while (1)
    {
        sum+=a[j++];
        cnt++;
        if(sum>abv)
        {
            break;
        }
    }
    cout<<cnt<<nl;
    

    
}
int main()
{

    fast;
    solve();
    return 0;
}
