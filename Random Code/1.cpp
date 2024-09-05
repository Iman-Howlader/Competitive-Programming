#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c)
                          { return !isalpha(c); }),
                s.end());
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}