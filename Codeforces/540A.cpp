#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s,target;
    cin>>n;
    cin>>s>>target;
    int dif,total=0;
    for(int i=0;i<n;i++)
    {

        dif= min(abs(s[i]-target[i]),10-abs(s[i]-target[i]));
        total+=dif;
    }
    cout<<total;
}
