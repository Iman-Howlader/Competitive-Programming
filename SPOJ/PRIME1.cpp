#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    bool flag;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {

            flag=true;
            if(i==1 )
                flag=false;
            for(int j=2; j*j<=i; j++)
            {

                if(i%j==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                cout<<i<<"\n";
        }
    }
}
