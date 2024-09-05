
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int pos=0,neg=0,zer=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
            zer++;
        else if(arr[i]>0)
            pos++;
        else
            neg++;
    }

    cout<<setprecision(6)<<fixed<<(pos/(float)n)<<endl;
    cout<<setprecision(6)<<fixed<<(neg/(float)n)<<endl;
    cout<<setprecision(6)<<fixed<<(zer/(float)n)<<endl;

}





