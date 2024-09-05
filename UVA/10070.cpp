#include<bits/stdc++.h>
using namespace std;
void isfestive(int n)
{
    if(n%15==0)
    cout<<"This is huluculu festival year.\n";
    if(n%55==0)
    cout<<"This is bulukulu festival year.\n";
}
int main()
{
    int n;
    bool flag=true;
    cin>>n;
    if(n%4==0 && n%100!=0 || n%400==0)
    {
         cout<<"This is leap year.\n";
         flag=false;
         isfestive(n);
         return 0;

    }
    if(n%15==0)
    {
        cout<<"This is huluculu festival year.\n";
        flag=false;
    }
    if(n%55==0)
    {
           cout<<"This is bulukulu festival year.\n";
           flag=false;
    }
    if(flag)
       cout<<"This is an ordinary year.\n";

}
