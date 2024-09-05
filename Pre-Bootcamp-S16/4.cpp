#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alice[3];
    int bob[3];
    int asum=0;
    int bsum=0;
    for(int i=0;i<3;i++)
    {
        cin>>alice[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>bob[i];
    }
    for(int i=0;i<3;i++)
    {
        if(alice[i]>bob[i])
            asum++;
        else if(alice[i]<bob[i])
            bsum++;
    }
    cout<<asum<<" "<<bsum;



}



