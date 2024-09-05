#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,N,K;
    cin>>t;
    while(t--)
    {
        cin>>N>>K;
        int arr[N];
        for(int i=0; i<N; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<N; i++)
        {
            if(K>=arr[i])
            {
                cout<<1;
                K=K-arr[i];
            }
            else
            {
                cout<<0;
            }
        }
        cout<<"\n";

    }
}
