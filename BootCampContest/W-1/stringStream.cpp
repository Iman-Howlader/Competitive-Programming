#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    int a;
    char b;
    vector<int> vect;
    while(ss>>a>>b)
    {
        vect.push_back(a);
    }
    ss>>a;
    vect.push_back(a);
    return vect;
}

int main()
{
    string s;
    cin >> s;
    vector<int>vect = parseInts(s);
    for(int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << "\n";
    }

    return 0;
}
