#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,rev;
    while(cin>>n)
    {
        int temp=n;
        rev=0;
        while(temp != 0)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(isPrime(n)==false)
        {
            cout<<n<<" is not prime."<<endl;
            return 0;
        }
        if(isPrime(rev)==true)
        {
            cout<<n<<" is  emirp."<<endl;
            return 0;
        }
        if(isPrime(n)==true && isPrime(rev)==false)
        {
            cout<<n<<" is prime."<<endl;
            return 0;
        }
    }
}
