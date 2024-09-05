#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countt=0;
    string S;
    cin>>S;
    int len=S.size();
    for(int i=0;i<S.size()/2;i++)
    {
        if(S[i]!=S[len-i-1])
        {
            countt++;
        }
    }
    cout<<countt;
}
