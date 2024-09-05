#include <bits/stdc++.h>
using namespace std;
void isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout << "no\n";
            return;

        }
    }
    cout<<"yes\n";
}
int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    isPrime(n);
	}
	return 0;
}

