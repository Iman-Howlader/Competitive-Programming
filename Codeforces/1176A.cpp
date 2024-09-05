#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,count;
    bool flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        flag=true;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                count++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                count++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                count++;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag==false)
            cout<<"-1"<<endl;
        else
            cout<<count<<endl;

    }
}
