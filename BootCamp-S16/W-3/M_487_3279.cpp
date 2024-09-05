/*-----------------------------------------------------
|  Iman Howlader                                      |
|  CSE, North South University                        |
|  Email: imanhowlader321@gmail.com                   |
-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define ve vector<int> vect
#define pb(x) push_back(x)
#define inp(n, vect)            \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        vect.push_back(x);      \
    }

#define out(v)            \
    for (auto x : v)      \
        cout << x << " "; \
    cout << nl;
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define gcd(a, b) __gcd(a, b)
#define prec(n) fixed << setprecision(n)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

void solve()
{
    int n, x;
    cin >> n;
    while (n--)
    {
        map<string, int> mp;
        map<char, char> mp2;
        mp2['A'] = mp2['B'] = mp2['C'] = '2';
        mp2['D'] = mp2['E'] = mp2['F'] = '3';
        mp2['G'] = mp2['H'] = mp2['I'] = '4';
        mp2['J'] = mp2['K'] = mp2['L'] = '5';
        mp2['M'] = mp2['N'] = mp2['O'] = '6';
        mp2['P'] = mp2['R'] = mp2['S'] = '7';
        mp2['T'] = mp2['U'] = mp2['V'] = '8';
        mp2['W'] = mp2['X'] = mp2['Y'] = '9';
        cin >> x;
        while (x--)
        {
            string s, s2;
            int cnt = 0;
            cin >> s;
            for (int i = 0; i < s.size(); i++)
            {
                if (cnt == 3)
                {
                    s2 += '-';
                    cnt++;
                }
                if (isdigit(s[i]))
                {
                    s2 += s[i];
                    cnt++;
                }
                if (isalpha(s[i]))
                {
                    s2 += mp2[s[i]];
                    cnt++;
                }
            }
            mp[s2]++;
        }
        bool flag = true;
        for (auto a : mp)
        {
            if (a.second > 1)
            {
                cout << a.first << " " << a.second << nl;
                flag = false;
            }
        }
        if (flag)
        {
            cout << "No duplicates." << nl;
        }
        if (n)
            cout << nl;
    }
}
int main()
{
    fast;
    // test
    {
        solve();
    }
    return 0;
}
