#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,lastans=0;
    cin>>n>>t;
    vector<vector<int>>arr(n);

    while(t--)
    {
        int quary,x,y,idx;
        cin>>quary>>x>>y;
        if(quary==1)
        {
            idx=((x^lastans)%n);
            arr[idx].push_back(y);
        }
        else if(quary==2)
        {
            idx=((x^lastans)%n);
            lastans=arr[idx][y%(arr[idx].size())];
            cout<<lastans<<"\n";
        }
    }

}
