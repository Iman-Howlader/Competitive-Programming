#include <bits/stdc++.h>
using namespace std;
 
const int mod = 1e9 + 7;
 
long long binPow(long long base, long long exponent) {
    // 3^5 =3^2 x 3^2 x 3
    if (exponent == 0) return 1;
    long long res = 1;
    if ( exponent % 2 ) {
        res = base;
        exponent--;
    }
    long long half = binPow(base, exponent / 2);
    res = (res * half * half);
    return res;
} // O(log (exponent))
 
 
long long binPowMod(long long base, long long exponent, long long mod) {
    // 3^5 =3^2 x 3^2 x 3
    if (exponent == 0) return 1;
    long long res = 1;
    if ( exponent % 2 ) {
        res = base % mod;
        exponent--;
    }
    long long half = binPowMod(base, exponent / 2, mod) % mod;
    res = (((res * half) % mod) * half) % mod;
    return res;
} // O(log (exponent))
 
//https://c...content-available-to-author-only...s.com/algebra/binary-exp.html
 
 
/// pow(base, exponent)
long long power(long long base, int exponent) {
    if (exponent == 0) return 1;
    auto half_power = power(base, exponent / 2);
    return half_power * half_power * (exponent % 2 ? base : 1);
}
 
/// pow(base, exponent)
long long power_modulo(long long base, int exponent) {
    if (exponent == 0) return 1;
    auto half_power = power_modulo(base, exponent / 2);
    return ((half_power * half_power) % mod * (exponent % 2 ? base : 1)) % mod;
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
 
    cout << binPow(2 , 3) << endl;
    cout << binPowMod(3, 18132, 17) << endl;
    return 0;
 
}
 
 