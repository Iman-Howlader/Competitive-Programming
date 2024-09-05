#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main()
{
    lld n;
    int count=0;
    cin>>n;
    vector<lld> vect(n);
    for(lld i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    int max=*max_element(vect.begin(),vect.end());
    for(int i=0;i<n;i++)
    {
        if(max==vect[i])
            count++;
    }
    cout<<count;
}
