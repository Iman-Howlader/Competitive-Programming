#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {

            sum+=arr[i];
            if(arr[i]<0)
                sum-=arr[i];
        }                                                                                                                                                                                                                                                                                                                                                                 nj

    }
}
