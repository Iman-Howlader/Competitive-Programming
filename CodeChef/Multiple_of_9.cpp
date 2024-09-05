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
        long long n, count = 0, count2 = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?')
            {
                count2 += (s[i] - '0');
            }
            else
            {
                count++;
            }
        }
        if (s[0] != '?')
        {
            if (count > 0)
            {
                count2 %= 9;
                if (count2 != 0)
                {
                    while (count--)
                    {
                        cout << 1;
                    }
                    cout << en;
                }
                else
                {
                    count--;
                    while (count--)
                    {
                        cout << 1;
                    }
                    cout << 2 << en;
                }
            }
            else
            {
                cout << (count2 % 9 ? 0 : 1) << endl;
            }
        }
        else
        {
            cout << 1;
            count--;
            while (count--)
            {
                cout << 0;
            }
            cout << en;
        }
    }

    return 0;
}