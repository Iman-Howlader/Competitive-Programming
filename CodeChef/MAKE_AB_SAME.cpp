#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,flag=0,i=1;
    cin>>t;
    while(t--)
    {

        cin>>a>>b>>c>>d;
        i=1;
        for(int i=1; i<1000; i++)
        {
            if(((a+i)%b)==((c+i)%d))
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
}

