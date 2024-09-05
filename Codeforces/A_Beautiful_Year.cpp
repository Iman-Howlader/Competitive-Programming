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

  int t;
  cin >> t;

  for (int i = t + 1;; i++)
  {

    string s = to_string(i);

    set<char> a;

    a.insert(s[0]);
    a.insert(s[1]);
    a.insert(s[2]);
    a.insert(s[3]);
    if (a.size() == 4)
    {
      cout << i << nl;
      break;
    }
  }
}

int main()
{

  fast;
  solve();
  return 0;
}
