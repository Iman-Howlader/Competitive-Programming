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

  map<string, int> mp;
  mp.insert({"zero", 0});
  mp.insert({"one", 1});
  mp.insert({"two", 2});
  mp.insert({"three", 3});
  mp.insert({"four", 4});
  mp.insert({"five", 5});
  mp.insert({"six", 6});
  mp.insert({"seven", 7});
  mp.insert({"eight", 8});
  mp.insert({"nine", 9});
  mp.insert({"ten", 10});
  mp.insert({"eleven", 11});
  mp.insert({"twelve", 12});
  mp.insert({"thirteen", 13});
  mp.insert({"fourteen", 14});
  mp.insert({"fifteen", 15});
  mp.insert({"sixteen", 16});
  mp.insert({"seventeen", 17});
  mp.insert({"eighteen", 18});
  mp.insert({"nineteen", 19});
  mp.insert({"twenty", 20});
  mp.insert({"thirty", 30});
  mp.insert({"forty", 40});
  mp.insert({"fifty", 50});
  mp.insert({"sixty", 60});
  mp.insert({"seventy", 70});
  mp.insert({"eighty", 80});
  mp.insert({"ninety", 90});
  mp.insert({"hundred", 100});
  mp.insert({"thousand", 1000});
  mp.insert({"million", 1000000});

  string s, temp;
  while (getline(cin, s))
  {
    stringstream ss(s);
    int n = 0, sum = 0;
    int flag = 0;
    while (ss >> temp)
    {
      if (temp == "negative")
      {
        flag = 1;
      }
      else if (temp == "hundred")
      {
        n = n * mp[temp];
      }
      else if (temp == "thousand")
      {
        sum += n * mp[temp];
        n = 0;
      }
      else if (temp == "million")
      {
        sum += n * mp[temp];
        n = 0;
      }
      else
      {
        n += mp[temp];
      }
    }
    sum += n;
    if (flag)
      cout << sum * (-1) << nl;
    else
      cout << sum << nl;
  }
}
int main()
{

  fast;
  solve();
  return 0;
}
