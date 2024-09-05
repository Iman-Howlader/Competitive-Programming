#include <bits/stdc++.h>
using namespace std;
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
#define testcase \
  int t;         \
  cin >> t;      \
  while (t--)
#define nl "\n"

void solve()
{
  string s, temp;
  cin >> s;
  int spc = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '<')
    {
      if (s[i + 1] == '/')
      {
        spc-=2;
        for (int j = 0; j < spc; j++)
        {
          cout <<" ";
        }
        
        cout << s[i] << s[i + 1] << s[i + 2] << s[i+3]<<nl;
      }
      else
      {
        for (int j = 0; j < spc; j++)
        {
          cout << " ";
        }
        spc += 2;
        cout << s[i] << s[i + 1] << s[i + 2] << nl;
      }
    }
  }
}
int main()
{

  fast;
  solve();
  return 0;
}
