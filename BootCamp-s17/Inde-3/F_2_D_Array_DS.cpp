/**
 *   Author : iman321
 *   Created: 2024-04-06 23:54:19
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> ans;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            ans.push_back(sum);
        }
    }

    cout << *max_element(ans.begin(), ans.end());
}
int main()
{
    fast;
    int t = 1;
    // cin>>t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}