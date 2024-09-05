#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,count=0;
    cin>>n;
    vector<int> vect(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>vect[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(vect[i]!=0)
        {
            vect[vect[i]]=0;
        }

    }
    for(int i=1; i<=n; i++)
    {
        if(vect[i]!=0)
        {
            count++;
        }
    }
    cout<<count<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(vect[i]>0)
        {
             cout<<i<<" ";
        }
    }
    return 0;

}
