#include <bits/stdc++.h>
using namespace std;
string ans="";
void reverseWord(string &word)
{
    reverse(word.begin(), word.end());
    ans+=word;
    ans+=" ";
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0, cnt = 0;
    while (ss >> word)
    {
        reverseWord(word);
    }
    ans.pop_back();
    cout<<ans<<endl;
}