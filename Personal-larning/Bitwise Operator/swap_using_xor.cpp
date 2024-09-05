#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=7;
    a=a^b;
    cout<<a<<" "<<b<<endl;
    b=a^b;
    cout<<a<<" "<<b<<endl;
    a=a^b;
    cout<<a<<" "<<b<<endl;
}