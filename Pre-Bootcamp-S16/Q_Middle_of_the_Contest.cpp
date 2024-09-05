#include <bits/stdc++.h>
/*
Problem:
Link   :
solution by: Iman Howlader
Gmail   : imanhowlader321@gmail.com
Github  : https://github.com/Iman-Howlader
*/


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve()
{
    int hr1,hr2,hr3,hr5,hr4,min1,min2;
    char c;
    cin>>hr1>>c>>min1;
    cin>>hr2>>c>>min2;
    hr3=hr1*60+min1;
    hr4=hr2*60+min2;
    hr5=(hr3+hr4)/2;
    int h=hr5/60;
    int m=hr5%60;
    if(h>=10 && m>=10)
        cout<<h<<":"<<m<<endl;
    else
    {
        if(h<10)
            cout<<"0";
        cout<<h<<":";
        if(m<10)
            cout<<"0";
        cout<<m<<endl;
    }
}
int main ()
{

    fast;
    solve();
    return 0;

}
