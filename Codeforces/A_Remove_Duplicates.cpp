#include <bits/stdc++.h>
using namespace std;
map<long long, long long> a, f;
long long k, T;
char s;
int main()
{
    a[0] = 1;
    cin >> T;
    while (T--)
    {

        cin >> s >> k;
        if (s == '+')
            a[k] = 1;
        else
        {
            while (a[f[k]])
                f[k] += k;
            cout << f[k] << endl;
        }
    }
}