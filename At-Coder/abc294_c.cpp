#include<bits/stdc++.h>
using namespace std;

int binary_search_find_index(vector<int> arr4, int data) {
    auto it = lower_bound(v.begin(), v.end(), data);
    if (it == v.end() || *it != data) {
        return -1;
    } else {
        std::size_t index = std::distance(v.begin(), it);
        return index;
    }
}
int main()
{
    int i,j,m,n;
    cin>>m>>n;
    vector<int> arr(m);
    vector<int> arr2(n);
    vector<int> arr3;
    vector<int> arr4;

    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<m;i++)
    {
        arr3.push_back(arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr3.push_back(arr2[i]);
    }
    arr4=arr3;
    sort(arr3.begin(),arr3.end());


    for(i=0;i<m+n;i++)
    {

    }


}

