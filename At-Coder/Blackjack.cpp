#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum>=22)
        cout<<"bust";
        else
        cout<<"win";
}
