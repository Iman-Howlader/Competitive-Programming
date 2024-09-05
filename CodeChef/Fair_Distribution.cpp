#include <iostream>
#include <vector>
#include <cmath>

std::string is_fair_distribution(int N, std::string S) {
    std::vector<int> prefix_sum(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + (S[i - 1] == '1' ? 1 : 0);
    }

    for (int i = 1; i <= N; ++i) {
        int left_sum = prefix_sum[i];
        int right_sum = prefix_sum[N] - prefix_sum[i];

        if (std::abs(left_sum - right_sum) <= (S[i - 1] - '0')) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;

        std::string S;
        std::cin >> S;

        std::string result = is_fair_distribution(N, S);
        std::cout << result << std::endl;
    }

    return 0;
}
