#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vect(n+1);
        for(int i=1;i<vect.size()-1;i++)
        {
            vect[i]=i+1;
        }
        vect[vect.size()-1]=1;
        for(int i=1;i<vect.size();i++)
        {
            cout<<vect[i]<<" ";
        }
        cout<<endl;
    }
}
