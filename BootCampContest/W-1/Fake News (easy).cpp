#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,s2 = "heidi";
    cin >> s;

    int j = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == s2[j])
        {
            j++;
        }
    }
    if(j == s2.size())
        cout << "YES\n";
    else
        cout <<"NO\n";
}


