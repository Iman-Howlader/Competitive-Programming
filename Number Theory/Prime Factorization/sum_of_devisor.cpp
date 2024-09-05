#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e7 + 7;
vector<bool> isPrime(N,true);
vector<int> primes;
void seive()
{
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j < N; j += i)
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

vector<pair<int, int>> prime_fact(int n)
{
    vector<pair<int, int>> tmp;
    for (int prime : primes)
    {
        if (prime * prime > n)
            break;
        int cnt = 0;
        while (n % prime == 0)
        {
            cnt++;
            n /= prime;
        }
        if (cnt)
            tmp.push_back({prime, cnt});
    }
    if (n > 1)
        tmp.push_back({n, 1});
    return tmp;
}

int sum_of_divisor(vector<pair<int,int>>a)
{
    ll sum=0;
    for(auto x:a)
    {
        int tmp=1;
        int ex=x.second;
        while (ex--)
        {
            tmp*=x.first;
        }
        sum+=tmp;
    }
    return sum;
}
int main()
{
    seive();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<pair<int,int>>vc=prime_fact(x);
        for(auto c:vc)
        {
            cout<<c.first<<"^"<<c.second<<" ";
        }
        cout<<endl;
        cout<<sum_of_divisor(vc)<<endl;
    }

}