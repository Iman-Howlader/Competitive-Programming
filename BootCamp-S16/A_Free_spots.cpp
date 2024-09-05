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
  int W, H, N, X1, X2, Y1, Y2;
  while (cin >> W >> H >> N && (W || H || N))
  {
    bool a[W+1][H+1]={0};
    int emty = W * H;
    while (N--)
    {
      cin >> X1 >> Y1 >> X2 >> Y2;

      for (int i = min(X1, X2); i <= max(X1, X2); ++i)
      {
        for (int j = min(Y1, Y2); j <= max(Y1, Y2); ++j)
        {
          if(a[i][j]==0){
            a[i][j] = 1;
            emty--;
          }
        }
      }
    }
    if (!emty)
      cout << "There is no empty spots.\n";
    else if (emty == 1)
      cout << "There is one empty spot.\n";
    else
      cout << "There are " << emty << " empty spots.\n";
  }
}
int main()
{

  fast;
  solve();
  return 0;
}
