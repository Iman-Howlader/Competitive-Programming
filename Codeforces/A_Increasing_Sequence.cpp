#include <bits/stdc++.h>
using namespace std;

#define inp(n, vec)             \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vec.push_back(x);      \
    }
void solve()
{
    int n;
    vector<int> v;
    cin>>n;
    vector<int> a;
    inp(n,v);
    int x=1;
    for (size_t i = 0; i <n; i++)
    {
        if(v[i]!=x)
        {
            a.push_back(x);
            x++;
        }
        else
        {
            x++;
            a.push_back(x);
            x++;
        }
    }
    cout<<a.back()<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
