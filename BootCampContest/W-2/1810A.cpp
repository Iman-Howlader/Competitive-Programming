#include<bits/stdc++.h>
using namespace std;
int func(vector<int>vect)
{
    for(int i=1; i<vect.size(); i++)
    {
        if(vect[i]==i)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    return 1;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,m;
    bool flag,flag2;
    cin>>t;
    while(t--)
    {
        cin>>m;
        flag=true;
        flag2=true;
        vector<int>vect(m+1);
        for(int i=1; i<=m; i++)
            cin>>vect[i];
        for(int i=1; i<=m; i++)
        {
            if(vect[i]==i)
            {
                cout<<"YES\n";
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            while(vect.size()!=0)
            {
                vect.erase(vect.begin());
                if(func(vect)==0)
                {
                    flag2=false;
                    break;

                }
            }
            if(flag2==true)
                cout<<"NO\n";
        }

    }
}
