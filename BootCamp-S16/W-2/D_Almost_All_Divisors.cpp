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
bool is_prime(int n)
{
  for (int i = 2; i * i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
void solve()
{
  testcase
  {
    long long int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
      cin >> x;
    long long int x = *max_element(a.begin(), a.end());
    long long int y = *min_element(a.begin(), a.end());
    unsigned long long int ans=x*y;
    if(is_prime(n))
    cout<<"-1"<<nl;
    else cout<<ans<<nl;
  }
}
int main()
{

  fast;
  solve();
  return 0;
}
