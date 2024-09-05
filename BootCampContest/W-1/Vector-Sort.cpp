#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> vect(n);
    for(int i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
}

