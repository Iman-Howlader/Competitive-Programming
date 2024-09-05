#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
int main()
{

    int t, n, b, x,cs=1;
    cin >> t;

    while (t--)
    {
        cout << "Case " << cs++ << ":" << nl;
        cin >> n >> b;
        string s;
        deque<int> a;
        while (b--)
        {
            cin >> s ;
            //cout << s << nl;
            if (s == "pushLeft")
            {
                cin>>x;
                if (a.size() == n)
                {
                    cout << "The queue is full" << nl;
                }
                else
                {
                    a.push_front(x);
                    cout << "Pushed in left: " << a.front() << nl;
                }
            }
            if (s == "pushRight")
            {
                cin>>x;
                if (a.size() == n)
                {
                    cout << "The queue is full" << nl;
                }
                else
                {
                    a.push_back(x);
                    cout << "Pushed in right: " << a.back() << nl;
                }
            }
            if (s == "popLeft")
            {
                if (a.empty())
                {
                    cout << "The queue is empty" << nl;
                }
                else
                {
                    cout << "Popped from left: " << a.front() << nl;
                    a.pop_front();
                }
            }
            if (s == "popRight")
            {
                if (a.empty())
                {
                    cout << "The queue is empty" << nl;
                }
                else
                {
                    cout << "Popped from right: " << a.back() << nl;
                    a.pop_back();
                }
            }
        }
    }
}
