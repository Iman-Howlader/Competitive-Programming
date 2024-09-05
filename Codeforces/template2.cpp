/**
 * Author: Iman320
 * Created: YYYY.MM.DD HH:MM:SS
*/
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#define dbg(...)
#endif
int main()
{
#ifdef LOCAL
    io();
    time_t Time;
    time(&Time);
    cerr << ctime(&Time) << endl;
    auto starttime = chrono::steady_clock::now();
#endif
#ifdef LOCAL
    cerr << "\n\nElapsed time: " << chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - starttime).count() << " millisecond\n";
#endif
}