#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

int main()
{
    fast;
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        ll sum = 0;
        vector<int> a;
        int p;
        cin >> p;
        for (int i = 41; i > 0;)
        {
            if (p % i == 0)
            {
                p = p / i;
                a.push_back(i);
                sum += i;
                i = 41-sum;
            }
            else
            {
                i--;
            }
        }
        sort(a.begin(), a.end());
        cout << "Case #" << cs++ << ": ";
        if (p == 1 && sum == 41)
        {
            cout << a.size() << " ";
            for (size_t i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            cout << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
}
