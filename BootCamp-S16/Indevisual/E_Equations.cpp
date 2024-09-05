/**
 *   Author : iman321
 *   Created: 2024-05-09 07:38:38
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

void equation (string eqn, int &a, int &b, int &c)
{
    a = b = c = 0;
    eqn+=' ';
    int coeff = 0;
    bool rhs = false, minus = false;
    for (char x : eqn)
    {
        if (x == '=')
            rhs = true;
        if (x == '-')
        {
           minus=!minus;
        }
        if (x >= '0' && x <= '9')
        {
            coeff *= 10;
            coeff += (x - '0');
        }
        if (x == 'x')
        {
            coeff = max(1, coeff);
            if (minus ^ rhs)
                a -= coeff;
            else
                a += coeff;
            minus = false;
            coeff = 0;
        }
        if (x == 'y')
        {
            coeff = max(1, coeff);
            if (minus ^ rhs)
            {
                b -= coeff;
            }
            else
            {
                b += coeff;
            }
            minus = false;
            coeff = 0;
        }

        if(x==' ' && coeff!= 0)
        {
            if(minus^rhs)
            {
                c-=coeff;
            }
            else
            {
                c+=coeff;
            }
            minus=false;
            coeff = 0;
        }
    }
}
void idk()
{
    cout << "don't know" << nl;
}

void printfraction(int a, int b)
{
    if ((a < 0) ^ (b < 0) && a != 0)
    {
        cout << "-";
    }
    a = abs(a);
    b = abs(b);

    int g = __gcd(a, b);
    a /= g;
    b /= g;

    cout << a;
    if (b != 1)
    {
        cout << "/" << b;
    }
    cout << nl;
}
void solve()
{
    string str;
    int x1, x2, y1, y2, z1, z2;
    getline(cin, str);
    equation(str, x1, y1, z1);
    getline(cin, str);
    equation(str, x2, y2, z2);
    if (x1 == 0)
    {
        x1 += x2;
        y1 += y2;
        z1 += z2;
    }
    if (y1 == 0)
    {
        x1 += x2;
        y1 += y2;
        z1 += z2;
    }
    if (x2 == 0)
    {
        x2 += x1;
        y2 += y1;
        z2 += z1;
    }
    if (y2 == 0)
    {
        x2 += x1;
        y2 += y1;
        z2 += z1;
    }

    if (y1 == 0 && y2 == 0)
    {
        if (x1 * z2 == x2 * z1)
        {
            printfraction(-z1, x1);
            idk();
        }
        else
        {
            idk();
            idk();
        }
    }
    else if (x1 == 0 && x2 == 0)
    {
        if (y1 * z2 == y2 * z1)
        {
            idk();
            printfraction(-z1, y1);
        }
        else
        {
            idk();
            idk();
        }
    }
    else if (x1 * y2 == x2 * y1)
    {
        idk();
        idk();
    }
    else
    {
        int lcm_x = (x1 * x2) / __gcd(x1, x2);
        int lcm_y = (y1 * y2) / __gcd(y1, y2);

        int x_num = (z1 * lcm_y / y1) - (z2 * lcm_y / y2);
        int x_den = (x1 * lcm_y / y1) - (x2 * lcm_y / y2);

        if (x_den == 0)
        {
            idk();
        }
        else
        {
            printfraction(-x_num, x_den);
        }

        int y_num = (z1 * lcm_x / x1) - (z2 * lcm_x / x2);
        int y_den = (y1 * lcm_x / x1) - (y2 * lcm_x / x2);

        if (y_den == 0)
        {
            idk();
        }
        else
        {
            printfraction(-y_num, y_den);
        }
    }
}
int main()
{
    fast;
    int t = 1;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++)
    {
        cin.ignore();
        solve();
        if(tc<t) cout<<nl;
    }
}