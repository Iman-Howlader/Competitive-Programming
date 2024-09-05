#include <bits/stdc++.h>
using namespace std;
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)
#define testcase \
  long long int t;         \
  cin >> t;      \
  while (t--)
#define nl "\n"

void solve()
{
  long long int arr[1000000000] = {0};
  for (int i = 2; i <= 1000000000; i++)
  {
    if (arr[i] == 0)
    {
      for (int j = 2; i * j <= 1000000000; j++)
      {
        arr[i * j] = 1;
      }
    }
  }

  testcase
  {
    long long int n,sq;
    cin >> n;
    sq=sqrt(n);
    if(sq*sq==n && arr[n]==0)
    cout<<"YES\n";
    else cout<<"NO\n";
  }
}
int main()
{

  fast;
  solve();
  return 0;
}
