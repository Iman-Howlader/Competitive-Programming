#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum=0;
    cin>>x;
    string S;
    while(x--)
    {
        cin>>S;
        for(int i=0; i<S.size(); i++)
        {
            if(S[i]=='+')
            {
                sum++;
                break;
            }
            else if(S[i]=='-')
            {
                sum--;
                break;
            }
        }
    }
    cout<<sum;
}

