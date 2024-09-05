#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int>vect(n);
    for(int i=0; i<vect.size(); i++)
    {
        cin>>vect[i];
    }
    sort(vect.begin(),vect.end());

    for(int i=1; i<vect.size(); i++)
    {
        if(vect[i]>vect[0])
        {
            cout<<vect[i];
            return 0;
        }
    }
    cout<<"NO\n";


}
