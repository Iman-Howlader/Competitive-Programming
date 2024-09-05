/**
 *   Author : iman321
 *   Created: 2024-03-28 21:37:42
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solve()
{
    string time;
    cin >> time;
    int h1 = time[0] - '0';
    int h2 = time[1] - '0';

    int hour = h1 * 10 + h2;
    string AMPM;
    if (hour < 12)
    {
        AMPM = "AM";
    }
    else
        AMPM = "PM";

    hour %= 12;
    if (hour == 0)
    {
        cout << "12";
        for (int i = 2; i < 5; ++i)
        {
            cout << time[i];
        }
    }
    else
    {
        if (hour < 10)
            cout << 0;
        cout << hour;
        for (int i = 2; i < 5; ++i)
        {
            cout << time[i];
        }
    }
    cout << " " << AMPM << '\n';
}
int main()
{
    fast;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // cout<<"Case "<<tc<<" ";
        solve();
    }
}