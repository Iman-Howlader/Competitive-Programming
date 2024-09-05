#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int n, x, y;
    cin >> n;
    if (n % 2 == 0)
    {
        x = n / 2 - 1;
        y = n / 2 + 1;
    }
    else
    {
        x = (n / 2);
        y = (n / 2) + 1;
    }
    if (x % 2 == 0 && y % 2 == 0)
    {
        x -= 1;
        y += 1;
    }
    cout<<x<<" "<<y;
}
int main(){

    fast;
    solve();
    return 0;
}
