#include<bits/stdc++.h>
#define end "\n"
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>n;
    while(n--)
    {
        cin>>ch;
        if(ch=='c'||ch=='o'||ch=='d'||ch=='e'||ch=='f'||ch=='r'||ch=='s')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
