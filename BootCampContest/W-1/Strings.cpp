#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,s2,s3;
    cin>>s>>s2;
    cout<<s.size()<<" "<<s2.size()<<"\n";
    s3=s+s2;
    cout<<s3<<"\n";
    swap(s.front(),s2.front());
    cout<<s<<" "<<s2;

}

