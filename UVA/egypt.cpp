#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b,c,as,bs,cs;
    while(1)
    {
       cin>>a>>b>>c;

        if(a==0 && b== 0 && c==0)
            return 0;
        else
        {
            as=pow(a,2);
            bs=pow(b,2);
            cs=pow(c,2);

            if((as+bs== cs) || (bs+cs==as)||(cs+as==bs))
                cout<<"right"<<"\n";
            else
                cout<<"wrong"<<"\n";
        }
    }
    return 0;
}
