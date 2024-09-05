#include <bits/stdc++.h>
using namespace std;
#define fast                     \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);                   \
   cout.tie(0)
#define testcase \
   int t;        \
   cin >> t;     \
   while (t--)
#define nl "\n"

void solve()
{

   string s;
   string cw, ccw;
   cin >>s >> n;
   n = n % 4;
   if (s[0] == '^')
   {
      for (int i = 1; i <= n; i++)
      {
         if (i == 1)
         {
            cw.push_back('>')
            ccw.push_back('<')
         }

         if (i == 2)
         {
            cw.push_back('v')
            ccw.push_back('v')
         }

         if (i == 3)
         {
            cw.push_back('<')
            ccw.push_back('>')
         }
         if (i == 4)
         {
            cw.push_back('^')
            ccw.push_back('^')
         }
      }
   }


   if (s[0] == '>')
   {
      for (int i = 1; i <= n; i++)
      {
         if (i == 1)
         {
            cw.push_back('v')
            ccw.push_back('^')
         }

         if (i == 2)
         {
            cw.push_back('<')
            ccw.push_back('<')
         }

         if (i == 3)
         {
            cw.push_back('^')
            ccw.push_back('v')
         }
         if (i == 4)
         {
            cw.push_back('>')
            ccw.push_back('>')
         }
      }
   }


   if (s[0] == '^')
   {
      for (int i = 1; i <= n; i++)
      {
         if (i == 1)
         {
            cw.push_back('>')
            ccw.push_back('<')
         }

         if (i == 2)
         {
            cw.push_back('v')
            ccw.push_back('v')
         }

         if (i == 3)
         {
            cw.push_back('<')
            ccw.push_back('>')
         }
         if (i == 4)
         {
            cw.push_back('^')
            ccw.push_back('^')
         }
      }
   }


   if (s[0] == '^')
   {
      for (int i = 1; i <= n; i++)
      {
         if (i == 1)
         {
            cw.push_back('>')
            ccw.push_back('<')
         }

         if (i == 2)
         {
            cw.push_back('v')
            ccw.push_back('v')
         }

         if (i == 3)
         {
            cw.push_back('<')
            ccw.push_back('>')
         }
         if (i == 4)
         {
            cw.push_back('^')
            ccw.push_back('^')
         }
      }
   }
}

int main()
{

   fast;
   solve();
   return 0;
}
