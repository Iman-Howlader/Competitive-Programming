#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,sum,prod;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        for(int i=0; i<n; i++)
        {
            sum=0;
            prod=1;
            if(arr[i]==0)
            {
                arr[i]+=1;
            }
            sum+=arr[i];
            prod*=arr[i];
        }



    }
}
