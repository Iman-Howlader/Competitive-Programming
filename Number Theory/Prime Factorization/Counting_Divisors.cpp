/*
Better Approach......
*/

#include <bits/stdc++.h>
using namespace std;

int d[1000005] = {};
void init()
{
    for (int i = 1; i < 1000005; i++)
    {
        for (int j = i; j < 1000005; j += i)
        {
            d[j]++;
        }
    }
}
int main()
{
    int n, x;
    cin >> n;
    init();
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << d[x] << "\n";
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// const int N = 1e6 + 8;
// vector<bool> isPrime(N, true);
// vector<int> primes;
// void seive()
// {
//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 2; i * i < N; i++)
//     {
//         if (isPrime[i])
//         {
//             for (ll j = i * i; j < N; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (ll j = 0; j < N; j++)
//     {
//         if (isPrime[j])
//         {
//             primes.push_back(j);
//         }
//     }
// }

// vector<pair<ll, int>> prime_fact(ll n)
// {
//     vector<pair<ll, int>> tmp;
//     for (int x : primes)
//     {
//         if (x * x > n)
//             break;
//         int cnt = 0;
//         while (n % x == 0)
//         {
//             cnt++;
//             n /= x;
//         }
//         if (cnt)
//             tmp.push_back({x, cnt});
//     }
//     if (n > 1)
//         tmp.push_back({n, 1});
//     return tmp;
// }
// int count_divisor(vector<pair<ll, int>> tmp)
// {
//     int divisor = 1;

//     for (auto x : tmp)
//     {
//         divisor *= (x.second + 1);
//     }
//     return divisor;
// }
// int main()
// {
//     seive();
//     int n, x;
//     cin >> n;
//     while (n)
//     {
//         cin >> x;
//         cout << count_divisor(prime_fact(x)) << endl;
//         n--;
//     }
// }