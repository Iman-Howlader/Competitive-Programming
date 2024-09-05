#include<bits/stdc++.h>
using namespace std;
int main()
{

    int count=0;
    int n,m;
    cin>>n;
    vector<int>vect(n);
    for(int i=0; i<vect.size(); i++)
        cin>>vect[i];
    for(int i=0; i<n; i++)
    {
        if(vect[i]%2==0)
            count++;
    }
    if( count==1)
    {
        for(int i=0; i<vect.size(); i++)
        {
            if(vect[i]%2==0)
            {
                m=i;
                break;
            }


        }
    }
    else
    {
        for(int i=0; i<vect.size(); i++)
        {
            if(vect[i]%2!=0)
            {
                m=i;
                break;
            }
        }
    }

    cout<<m+1<<endl;
}
