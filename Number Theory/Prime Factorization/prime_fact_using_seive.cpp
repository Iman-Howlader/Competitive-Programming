#include <bits/stdc++.h>
using namespace std;

const int N = 2e7 + 8;
vector<bool> isPrime(N, true);
vector<int> primes;

void seive()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * 1ll * i < N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

vector<int> prime_factorization(int n)
{
    vector<int> ans;
    for (int prime_num : primes)
    {
        if (prime_num * prime_num > n)
            break;
        while (n % prime_num == 0)
        {
            ans.push_back(prime_num);
            n /= prime_num;
        }
    }
    if (n > 1)
        ans.push_back(n);
    return ans;
}
int main()
{
    int n;
    seive();

    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        vector<int> pf = prime_factorization(n);
        for (int x : pf)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}