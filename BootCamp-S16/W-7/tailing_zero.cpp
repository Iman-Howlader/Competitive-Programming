#include<bits/stdc++.h>
using namespace std;
int tailing_zerO(int n)
{
    int cnt=0;
    while((n/5)>0)
    {
        cnt+=(n/5);
        n=(n/5);
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<tailing_zerO(n)<<endl;

}