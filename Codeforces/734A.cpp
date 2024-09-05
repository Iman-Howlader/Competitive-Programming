#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Ca=0,Cd=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            Ca++;
        else{
            Cd++;
        }
    }
    if(Ca>Cd)
        cout<<"Anton";
    else if(Cd>Ca)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
