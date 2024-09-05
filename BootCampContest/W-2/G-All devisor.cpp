#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vect;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
             vect.push_back(i);
             if(n/i != i)
                vect.push_back(n/i);
        }

    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
}
