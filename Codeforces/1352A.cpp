#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,countt=0;
    vector <int> vect;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i>=0; i++)
        {
            if(n>=10000)
            {
                vect[i]=n-(n%10000);
                n=n%10000;
                countt++;
            }
            else if(n>=1000)
            {
                vect[i]=n-(n%1000);
                n=n%1000;
                countt++;
            }
            else if(n>=100)
            {
                vect[i]=n-(n%100);
                n=n%100;
                countt++;
            }
            else if(n>=10)
            {
                vect[i]=n-(n%10);
                n=n%10;
                countt++;
            }
            else
            {
                vect[i]=n;
                countt++;
                break;
            }
        }
        cout<<countt<<endl;
        for(int i=0;i<vect.size();i++)
        {
            cout<<vect[i]<<" ";
        }
        cout<<endl;

    }
}
