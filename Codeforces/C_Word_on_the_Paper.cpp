#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        char a[8][8];
        vector<char> vect;
        for (size_t i = 0; i < 8; i++)
        {
            for (size_t j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        for (size_t i = 0; i < 8; i++)
        {
            for (size_t j = 0; j < 8; j++)
            {
                if (a[i][j] == '.')
                {
                }
                else
                    vect.push_back(a[i][j]);
            }
        }
        for (size_t i = 0; i < vect.size(); i++)
        {
            cout << vect[i];
        }
        cout << nl;
    }
}
int main()
{

    fast;
    solve();
    return 0;
}
