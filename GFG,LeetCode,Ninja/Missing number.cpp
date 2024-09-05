#include<bits/stdc++.h>
using namespace std;
int missingNumber(int A[], int N)
{
    int arr[N+1]={0};
    for(int i=1;i<=N;i++)
    {
        arr[A[i]]++;
    }
    
    for(auto x:arr)
    {
        if(x==0)
        {
            return x;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int i=0,n;
        cin>>n;
        int a[n+2];
        for (int i = 1; i <n; i++)
        {
            cin>>a[i];
        }
        int ans=missingNumber(a,n);
        cout<<ans<<endl;
    }

}
