#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n;
    cin>>n;
    while(n--)
    {
        int countt=0;
        cin>>a>>b>>c>>d;
        if(a<b)
        {
            countt++;
        }
        if(a<c)
        {
            countt++;
        }
        if(a<d)
        {
            countt++;
        }

        cout<<countt<<endl;
    }
    return 0;
}
