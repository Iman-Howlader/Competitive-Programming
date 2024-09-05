#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            if (a[i] > 10)
            {
                  b[i]=-1;
            }
              
        }
        int x=*max_element(b.begin(),b.end());
        for (int i = 0; i <n; i++)
        {
            if(b[i]==x)
            {
                cout<<i+1<<"\n";
                break;
            }
            
        }
        
    }
}