#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        // Calculate the potential attack positions
        int dx = abs(xK - xQ);
        int dy = abs(yK - yQ);

        // Check if the knight can attack both the king and queen
        if ((dx % a == 0 && dy % b == 0 && (dx / a) % 2 == (dy / b) % 2) ||
            (dx % b == 0 && dy % a == 0 && (dx / b) % 2 == (dy / a) % 2)) {
            cout << "2\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}
