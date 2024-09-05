#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>a;
        vector <int> arr(a);
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        int  x =*min_element(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>x)
                count++;
        }
        cout<<count<<"\n";
    }
}
