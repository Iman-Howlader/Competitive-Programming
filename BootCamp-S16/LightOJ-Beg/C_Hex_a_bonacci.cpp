#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, e, f;

const long long N = 10010;
long long dp[N];
int mod = 1e7 + 7;
long long fn(int n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;

    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4)  + fn(n - 5)+ fn(n - 6))%mod;
}
int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        memset(dp, -1, sizeof(dp));
        printf("Case %d: %d\n", caseno, fn(n)%mod);
    }
    return 0;
}