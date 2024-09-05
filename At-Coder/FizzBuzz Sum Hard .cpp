#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,sum;
    int A,B;
    cin>>N>>A>>B;
    sum=N*(N-1)/2;
    while(N--)
    {
        if(N%A==0)
        {
            sum-=N;
        }
        else if(N%B==0)
        {
            sum-=N;
        }
    }
    cout<<sum;


}
