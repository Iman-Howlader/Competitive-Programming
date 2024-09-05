#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false),cin.tie(0);

using namespace std;
int main()
{
    faster;
    long long int n,k,i;
    vector <long long int> vect;
    cin>>n>>k;
    for(i=1; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            vect.push_back(i);
            if(n/i!=i)
                vect.push_back(n / i);
        }

    }

    sort(vect.begin(),vect.end());
    if(vect.size()<k)
        cout<<"-1"<<"\n";
    else
        cout<<vect[k-1]<<"\n";

}

