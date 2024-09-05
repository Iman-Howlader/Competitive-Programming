#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define YES cout << "YES" << en
#define NO cout << "NO" << en
#define yes cout << "Yes" << en
#define no cout << "No" << en
#define fill_number(x, n) setfill('0') << setw(n) << (x)
#define precision_number(x, n) fixed << setprecision(n) << (x)
template <typename T>
T lcm(T a, T b)
{
    return (a * (b / __gcd(a, b)));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n), v1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long ans = 0;
        for (int i = 0; i < n; i += k)
        {
            if (a[i] < 0)
            {
                ans += abs(a[i]);
            }
        }
        for (int i = n-1; i >=0; i -= k)
        {
            if (a[i] > 0)
            {
                ans += a[i];
            }
        }
        cout << ans * 2 - max(abs(a[0]), a.back()) << en;
    }
    return 0;
}