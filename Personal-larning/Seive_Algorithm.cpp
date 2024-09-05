#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;
bool isPrime[N + 1];
void seive()
{

    for (int i = 0; i <= N; ++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for(int i=4;i<=N;i+=2)
    {
        isPrime[i]=false;
    }
    for (int i = 3; (long long) i*i <=N; i+=2)
    {
        for (int j= i*i; j<=N; j+=i)
        {
            isPrime[j]=false;
        }  
    }
    
}
int main()
{
    seive();
    for (int i = 0; i <=1000; i++)
    {
        if(isPrime[i])
        cout<<i<<" "<<isPrime[i]<<endl;
    }
    
}
