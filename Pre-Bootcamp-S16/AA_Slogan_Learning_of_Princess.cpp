#include <bits/stdc++.h>


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve()
{
    int n;
    string str;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        getline(cin,str);
        if(str=="ko te kader molla")
            cout<<"tui rajakar tui rajakar\n";
        else if (str=="tumi ke ami ke")
        {
            cout<<"garo chakma bangali\n";
        }
        else if (str=="jalo re jalo")
        {
            cout<<"agun jalo\n";
        }
        else if (str=="tomar amar thikana")
        {
            cout<<"padma meghna jomuna\n";
        }

    }

}
int main ()
{

    fast;
    solve();
    return 0;

}
