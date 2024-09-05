#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>vect(3);
        for(int i=0;i<3;i++)
        {
            cin>>vect[i];
        }
        sort(vect.begin(),vect.end());
        if(vect[0]==vect[1] && vect[1]==vect[2])
        {
            cout<<"YES\n";
            cout<<vect[0]<<" "<<vect[1]<<" "<<vect[2]<<"\n";
        }
        else if(vect[1]==vect[2])
        {
            cout<<"YES\n";
            cout<<1<<" "<<vect[0]<<" "<<vect[1]<<"\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}
