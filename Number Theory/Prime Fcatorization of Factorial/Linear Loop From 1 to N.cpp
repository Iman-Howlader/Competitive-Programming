/*
Brute Force using seive: Prime Factorization of N factrial (N!)
*/

#include <bits/stdc++.h>
using namespace std;

const int SIZE = 2e7 + 5;
vector<int> primes;
vector<bool> isPrime(SIZE, true);
void seive()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * 1ll * i < SIZE; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < SIZE; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    seive();
}