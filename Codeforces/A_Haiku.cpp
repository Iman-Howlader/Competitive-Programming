#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define nl "\n"

void solve()
{
    string str, str2, str3;
    int s1 = 0, s2 = 0, s3 = 0;
    getline(cin, str);
    getline(cin, str2);
    getline(cin, str3);
    for (int i = 0; i <str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            s1++;
    }
    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] == 'a' || str2[i] == 'e' || str2[i] == 'i' || str2[i] == 'o' || str2[i] == 'u')
            s2++;
    }
    for (int i = 0; i < str3.size(); i++)
    {
        if (str3[i] == 'a' || str3[i] == 'e' || str3[i] == 'i' || str3[i] == 'o' || str3[i] == 'u')
            s3++;
    }

    if (s1 == 5 && s2 == 7 && s3 == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{

    fast;
    solve();
    return 0;
}
