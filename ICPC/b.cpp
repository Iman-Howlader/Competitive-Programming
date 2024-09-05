#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long recursion_count = 0;
bool flag = true;

void p_bonacci(long long N, long long P, long long K)
{
    if (N < P)
    {
        flag = false;
        return;
    }

    long long ans = 0;
    for (long long i = 1; i <= P; i++)
    {
        p_bonacci(N - i, P, K);
        recursion_count++;
        if (recursion_count == K - 1)
        {
            flag = true;
            cout << N << " " << N - i << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N, P, K;
    cin >> N >> P >> K;

    p_bonacci(N, P, K);
    if (!flag)
    {
        cout << "Invalid" << endl;
    }

    return 0;
}