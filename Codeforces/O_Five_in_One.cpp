#include <stdio.h>
#include <limits.h>

int is_prime(int n) {
    if (n == 1 || n == 0)
        return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int count_div(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    return cnt;
}

int is_palindrome(int n) {
    int m = n;
    int ans = 0;
    while (m != 0) {
        int rem = m % 10;
        ans = ans * 10 + rem;
        m /= 10;
    }
    if (n == ans) {
        return 1;
    }
    return 0;
}

int max(int arr[], int n) {
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }
    return ans;
}

int min(int arr[], int n) {
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < ans) {
            ans = arr[i];
        }
    }
    return ans;
}

int main() {
    int n, prime = 0, pal = 0;
    scanf("%d", &n);
    int arr[n];
    int div = 0, div_ele;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (is_prime(arr[i])) {
            prime++;
        }
        if (is_palindrome(arr[i])) {
            pal++;
        }

        if (count_div(arr[i]) >= div) {
            div = count_div(arr[i]);
            div_ele = arr[i];
        }
    }
    printf("The maximum number : %d\n", max(arr, n));
    printf("The minimum number : %d\n", min(arr, n));
    printf("The number of prime numbers : %d\n", prime);
    printf("The number of palindrome numbers : %d\n", pal);
    printf("The number that has the maximum number of divisors : %d\n", div_ele);
    return 0;
}
