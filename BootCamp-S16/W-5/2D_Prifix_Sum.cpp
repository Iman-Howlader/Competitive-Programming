#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[n][n];
    int pref[n][n]={0};
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j <n; j++)
        {
            arr[i][j]=rand()%10;
        }
    }
    for (size_t i = 0; i <n; i++)
    {
        if(i==0)
        {
            pref[0][i]=arr[0][i];
        }
        else
        {
            pref[0][i]=pref[0][i-1]+arr[0][i];
        }
    }
    for (size_t i = 1; i <n; i++)
    {
        pref[i][0]=pref[i-1][0]+arr[i][0];
    }
    for (size_t i = 1; i <n; i++)
    {
        for (size_t j = 1; j <n; j++)
        {
            if(i>0 && j>0)
            pref[i][j]=pref[i-1][j]+pref[i][j-1]+arr[i][j]-pref[i-1][j-1];
        }
    }
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j <n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j <n; j++)
        {
            cout<<pref[i][j]<<" ";
        }
        cout<<endl;
    }
    
}