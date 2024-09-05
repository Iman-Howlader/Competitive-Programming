#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

long long K_value(int i, int A) {
    return abs(i % A - i % (A - 1));
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int A;
        long long N;
        cin >> A >> N;

        long long result = 0;
        for (int i = 1; i <= N; i++) {
            result += K_value(i, A);
        }

        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}

