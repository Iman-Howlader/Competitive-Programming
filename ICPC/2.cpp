#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define fill_number(x, n) setfill('0') << setw(n) << (x)
#define precision_number(x, n) fixed << setprecision(n) << (x)
template <typename T>
T lcm(T a, T b)
{
    return (a * (b / __gcd(a, b)));
}
#define FOR_LOOP(i, start, end) for (int i = start; i < end; ++i)

// const long long sieve_N = 2e7;
// bool is_prime[sieve_N + 1];
// vector<long long> primes;

// void sieve()
// {
//     fill(is_prime, is_prime + sieve_N + 1, true);
//     is_prime[0] = is_prime[1] = false;

//     for (long long i = 2; i * i <= sieve_N; i++)
//     {
//         if (is_prime[i])
//         {
//             for (long long j = i * i; j <= sieve_N; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }

//     for (long long i = 2; i <= sieve_N; i++)
//     {
//         if (is_prime[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;

        long long overs = 0, balls = 0, runs = 0, wickets = 0, b = 0;

        for (char c : S)
        {
            if (c == 'W')
            {
                wickets++;
                balls++;
                b++;
            }
            else
            {
                b++;
                long long runsFromBall = c - '0';
                balls++;
                b++;
                runs += runsFromBall;
                if (balls == 6)
                {
                    overs++;
                    balls = 0;
                }
            }
        }

        cout << overs << "." << balls << (b > 6 ? " Overs" : " Over") << " " << runs << (runs > 1 ? " Runs" : " Run") << " " << wickets << (wickets > 1 ? " Wickets" : " Wicket") << "." << endl;
    }

    return 0;
}