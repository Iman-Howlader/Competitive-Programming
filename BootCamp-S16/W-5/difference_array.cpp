#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int dif_array[n+1]={0};
    for (size_t i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int q,l,r,v;
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>v;
        dif_array[l]+=v;
        dif_array[r+1]-=v;
    }
    for (size_t i = 1; i <n; i++)
    {
        dif_array[i]+=dif_array[i-1];
    }
    for (size_t i = 0; i <n; i++)
    {
        arr[i]+=dif_array[i];
    }
    for (size_t i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}