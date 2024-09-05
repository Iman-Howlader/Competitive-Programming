#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
    cin>>m>>n;
    int matrix[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
                matrix[i][j]= -18;
            printf("%c",matrix[i][j]+64);
        }
        cout<<endl;
    }
}
