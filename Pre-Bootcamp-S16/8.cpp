#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<long long int>vect(5);
    for(int i=0;i<vect.size();i++)
    {
        cin>>vect[i];
    }
    sort(vect.begin(),vect.end());
    long long int minn=vect[0],maxx=vect[4];
    for(int i=1;i<vect.size()-1;i++)
    {
        minn+=vect[i];
        maxx+=vect[i];
    }
    cout<<minn<<" "<<maxx;
}
