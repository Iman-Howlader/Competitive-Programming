#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
int SOD[N+1];

void sieve_sum_div()
{
    /// `SOD` is already zero-initialized
    /// as it is a global array.
    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N; j += i)
        {
            SOD[j] += i;
        }
    }
}
int main()
{
    sieve_sum_div();
    for(int i=0;i<100;i++)
    {
        cout<<i<<" ->"<<SOD[i]<<"\n";
    }
}
