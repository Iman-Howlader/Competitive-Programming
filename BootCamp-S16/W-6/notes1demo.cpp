#include <bits/stdc++.h>
using namespace std;

vector<int>prime_factorization(int n)
{
    vector<int>temp;
    for(int i=2;i*1ll*i<=n;i++)
    {
        while (n%i==0)
        {
            n/=i;
            temp.push_back(i);
        }
        
    }
    if(n!=1)
    temp.push_back(n);

    return temp;
}

const int N=1e7+5;
vector<bool>isPrime;
vector<int>primes;
void seive()
{
    isPrime.assign(N,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(isPrime[i])
        {
            for (int j =i*i; j <N; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }

    for(int i=0;i<N;i++)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    // int n;
    // cin >> n;
    // vector<int> a = prime_factorization(n);
    // for (auto &x : a)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    seive();
    for(auto x:primes)
    {
        if(x<1000)
        cout<<x<<endl;
    }
}
