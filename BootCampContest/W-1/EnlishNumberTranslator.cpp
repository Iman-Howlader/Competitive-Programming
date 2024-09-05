#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    string input,str;
    string ch[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    int number[] =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40, 50, 60, 70, 80, 90 };

    getline(cin,input);
    stringstream ss(input);
    long long million=0,thousand=0,hundred=0,tmp=0;
    while(ss>>str)
    {
        for(int i=0; i<28; i++)
        {
            if(str==ch[i])
            {
                tmp+=number[i];
                break;
            }
            else if(str=="negative")
            {
                cout<<"-";
                break;

            }
            else if(str=="million")
            {
                million=tmp*1000000;
                tmp=0;
                break;
            }
            else if(str=="thousand")
            {
                thousand=tmp*1000;
                tmp=0;
                break;
            }
            else if(str=="hundred")
            {
                tmp=tmp*100;
                break;
            }

        }

    }

    int ans=million+thousand+tmp;
    cout<<ans<<"\n";
}


