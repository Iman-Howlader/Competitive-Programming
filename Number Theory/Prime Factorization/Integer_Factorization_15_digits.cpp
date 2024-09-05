#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e7 + 8;
vector<bool> isPrime(N, true);
vector<int> primes;
void seive()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i < N; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (ll j = 0; j < N; j++)
    {
        if (isPrime[j])
        {
            primes.push_back(j);
        }
    }
}

vector<pair<ll, int>> prime_fact(ll n)
{
    vector<pair<ll, int>> tmp;
    for (int x : primes)
    {
        if (x * x > n)
            break;
        int cnt = 0;
        while (n % x == 0)
        {
            cnt++;
            n /= x;
        }
        if (cnt)
            tmp.push_back({x, cnt});
    }
    if (n > 1)
        tmp.push_back({n, 1});
    return tmp;
}
int main()
{
    ll n;
    seive();
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        vector<pair<ll, int>> factorize = prime_fact(n);

        for (auto x : factorize)
        {
            cout << x.first << "^" << x.second << " ";
        }
        cout << endl;
    }
}