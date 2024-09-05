#include <bits/stdc++.h>
using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve()
{

    string str;
    cin>>str;

    if(str[8]=='P')
    {
        if(str[0] != '1' || str[1] != '2')
        {
            str[0]++;
            str[1]+=2;
        }


    }
    else
    {
        if(str[0]=='1' && str[1]=='2')
        {
            str[0]--;
            str[1]-=2;
        }

    }
    str.erase(8);

    cout<<str;





}
int main ()
{

    fast;
    solve();
    return 0;

}
