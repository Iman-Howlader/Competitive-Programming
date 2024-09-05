/**
 *   Author : iman321
 *   Created: 2024-05-08 22:23:20
 **/

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define nl '\n'
#define fix(x) fixed << setprecision(x)
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define read(x) cin >> x;
#define write(x) cout << x;
#define all(x) x.begin(), x.end()
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)
#define inputV(x, n)            \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define mod 1e9 + 7
#define INF 1e18
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
ll func2(string s, int b)
{
    ll i = 1, ans = 0;
    reverse(all(s));
    for (int j = 0; j < s.size(); j++)
    {
        int n;
        if (s[j] >= '0' && s[j] <= '9')
        {
            n = s[j] - '0';
        }
        else
        {
            n = s[j] - 'a' + 10;
        }
        if (n >= b)
            return -1;
        ans += n * i;
        i *= b;
    }
    return ans;
}

ll func1(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '1')
            return -1;
    }
    return (ll)s.size();
}

ll operation(ll a, ll b, char op)
{
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    if (op == '*')
        return a * b;
}
void solve()
{
    string A, B, C;
    char op, eq;
    cin >> A >> op >> B >> eq >> C;
    ll n1, n2, n3;
    vector<int> vec;
    for (int i = 0; i < 37; i++)
    {
        if (i == 1)
        {
            n1 = func1(A);
            n2 = func1(B);
            n3 = func1(C);
        }
        else
        {
            n1 = func2(A, i);
            n2 = func2(B, i);
            n3 = func2(C, i);
        }
        if (n1 == -1 || n2 == -1 || n3 == -1)
            continue;
        if (op == '/')
        {
            if (n2 > 1 && n1 / n2 == n3 && n2 * n3 == n1)
            {
                vec.push_back(i);
            }
        }
        else
        {
            if (operation(n1, n2, op) == n3)
            {
                vec.push_back(i);
            }
        }
    }
    if (vec.empty())
        cout << "invalid\n";
    else
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] <= 9)
                cout << vec[i];
            else if (vec[i] == 36)
            {
                cout << "0";
            }
            else
            {
                cout << char(vec[i] + 87);
            }
        }
        cout << "\n";
    }
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}