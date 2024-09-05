#include <bits/stdc++.h>
using namespace std;

vector<int> generateProperDivisor(int n)
{
    vector<int> ans;
    for (int i = 1; i * 1ll * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            int tmp = n / i;
            if (tmp != i && tmp != n)
            {
                ans.push_back(tmp);
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        vector<int> div = generateProperDivisor(n);
        long long sum = 0;
        for (auto &x : div)
        {
            sum += x;
        }
        cout << sum << "\n";
    }
}