#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>a;
    for(int i=1;i<=n*m;i++)
    {
        a.push_back(i);
    }
    bool flag=true;
    int j=0;
    for(int i=1;i<a.size();i++)
    {
        if(flag)
        {
            cout<<a[j]<<" ";
            j++;
            if(j==m)
            {
                flag=false;
                j=2*m-1;
            }
        }
        else
        {
            cout<<a[j]<<" ";
            j--;
        }
    }
   
}