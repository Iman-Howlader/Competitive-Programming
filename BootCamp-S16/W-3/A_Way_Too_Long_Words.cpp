#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    vector<string>v;
    while(n--)
    {
        cin>>s;
        v.push_back(s);

    }
    for(int i=0; i<v.size(); i++)
    {

        if(v[i].size()<=10)
        {
            cout<<v[i];
        }
        else
        {
            cout<<v[i].front()<<v[i].size()-2<<v[i].back();
        }
        cout<<endl;

    }

}