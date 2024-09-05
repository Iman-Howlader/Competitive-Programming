#include<bits/stdc++.h>
using namespace std;
void func(vector<int>vect)
{
    int x,y,dif;
    while(vect.size()!=1)
    {
        sort(vect.begin(),vect.end());
        x=*max_element(vect.begin(),vect.end());

        y=*min(vect.begin(),vect.end());
        vect.erase(find(vect.begin(),vect.end(),x));
        vect.erase(find(vect.begin(),vect.end(),y));
        dif=x-y;
        vect.push_back(dif);
    }
    cout<<vect[0]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>vect;
        for(int i=1; i<=n; i++)
            vect.push_back(i);
            func(vect);
    }

}

