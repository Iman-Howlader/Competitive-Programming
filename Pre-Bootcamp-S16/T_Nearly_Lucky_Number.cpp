#include <bits/stdc++.h>

using namespace std;

#define fast                          \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
        cout.tie(0)
#define endl "\n"
void solve()
{
        long long int n, rem,count=0;
        cin >> n;
        while (n != 0)
        {
                rem = n % 10;
                if (rem == 4 || rem == 7)
                {
                        count++;
                }
                
                n = n / 10;
        }
        if(count==4 || count==7)
        cout << "YES";
        else
        cout<<"NO\n";
}
int main()
{

        fast;
        solve();
        return 0;
}
