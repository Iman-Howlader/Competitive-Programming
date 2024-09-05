/**
 *   Author : iman320
 *   Created: 2023-10-22 18:45:39
 **/
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl '\n'
#define ll long long
#define ve vector<int>
#define pb(x) push_back(x)
#define pp pop_back()
#define all(x) x.begin(), x.end()
#define gcd(a, b) __gcd(a, b)
#define prec(n) fixed << setprecision(n)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define css cout << "Case " << cs++ << ": "
#define loop(x, v, n) for (int x = v; x < n; x++)
#define rloop(x, v, n) for (int x = n - 1; x >= v; x--)
#define inp(n, vec)           \
  for (int i = 0; i < n; i++) \
  {                           \
    int x;                    \
    cin >> x;                 \
    vec.push_back(x);         \
  }
#define out(v)        \
  for (auto x : v)    \
    cout << x << " "; \
  cout << nl;
template <typename T>
T lcm(T a, T b)
{
  return a / gcd(a, b) * b;
}
int cs = 1;

//----------------------------------------seive algorithm------------------------//
const ll N = 2e7 + 7;
bool S[N + 1];
vector<ll> primes;
void seive()
{
  S[0] = S[1] = true;
  for (ll i = 2; (ll)i * i <= N; i++)
  {
    if (S[i] == false)
    {
      for (size_t j = i * i; j <= N; j += i)
      {
        S[j] = true;
      }
    }
  }
  for (size_t i = 2; i <= N; i++)
  {
    if (!S[i])
    {
      primes.push_back(i);
    }
  }
}
/*
    Problem Link:
    Solution Idea:
*/
/*********************************Code Start From Here************************************/
bool ok(int n, int k)
{
  if (n % k == 0)
  {
    return true;
  }
  return false;
}
void solve()
{
  int n,k;
  cin >> n >> k;
  int prod = 1;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    prod *= a[i];
  }
  int x = *min_element(a.begin(), a.end());
  int cnt = 0;
  if (prod % k == 0)
  {
    cout << cnt << nl;
    return;
  }
  else
  {
    while (true)
    {
      prod /= x;
      x++;
      cnt++;
      if (ok(x, k))
      {
        break;
      }
    }
  }
  cout << cnt << nl;
}
int main()
{
  fast;
  // seive();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
