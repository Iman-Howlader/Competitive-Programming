#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        for(int i=n-1;i>=0;i--)
        {
//            cout<<b[i]<<" ";
            if(a[i]==b[i])
            {
                continue;
            }
            else
            {
                flag=1;
                cout<<b[i];
                break;
            }
        }
        if(flag==0)
        {
            cout<<0;
        }
        cout<<endl;
    }
}
