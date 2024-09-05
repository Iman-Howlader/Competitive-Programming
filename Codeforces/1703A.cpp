#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n;

    while(n--)
    {
        cin>>s;
        if(s=="YES"||s=="YEs"||s=="YeS"||s=="Yes"||s=="yES"||s=="yEs"||s=="yeS"||s=="yes")
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }

}
