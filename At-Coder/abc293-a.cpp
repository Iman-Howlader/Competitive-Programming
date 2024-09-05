#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    vector <int>ans;
    for(int i=0; i<arr.size(); i++)
        cin>>arr[i];
    for(int i=0; i<arr.size(); i++)
    {
        if (arr[i]%2==0)
        {
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

}
