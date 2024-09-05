#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int flag=0;
    string name;
    getline(cin,name);
    for(int i=0; i<name.size(); i++)
    {
        if(name[i]=='R')
        {
            if(name[i+1]=='a')
            {
                if(name[i+2]=='t')
                {
                    if(name[i+3]=='u')
                    {
                        if(name[i+4]=='l')
                        {
                            flag=1;
                        }
                    }
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}
