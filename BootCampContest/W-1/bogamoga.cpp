#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,ans;
    int j=0,k=0;
    cin>>a;
    cin>>b;
    for(int i=0; i<a.size()+b.size(); i++)
    {
        if(i%2==0)
        {
            ans.push_back(a[j]);
            j++;
        }

        else
        {
            ans.push_back(b[k]);
            k++;
        }

    }
    cout<<ans;

}
