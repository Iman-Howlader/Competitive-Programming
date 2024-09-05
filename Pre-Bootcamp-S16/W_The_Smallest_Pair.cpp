#include <bits/stdc++.h>
/*
Problem: 
Link   : 
solution by: Iman Howlader
Gmail   : imanhowlader321@gmail.com
Github  : https://github.com/Iman-Howlader
*/


using namespace std;

#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"
void solve(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        vector<int>arr(N);
        for(int j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        int sum=arr[0]+arr[1];
        cout<<sum<<endl;
        
    }
}
int main () {

        fast;
        solve();
        return 0;
   
}
