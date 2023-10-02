#include <stdio.h>

long long modPow(long long base, long long exponent, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent = exponent / 2;
    }
    return result;
}

long long power (long long x, long long n){
    if (n == 0) return 1;
    if (n % 2 == 0) return power (x*x, n/2);
    return x * power (x, n-1);
}

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long sum = 1 + modPow(2, n, m);
    for (long long i = 3; i <= 100; i++) {
        //long long term = modPow(i, i, m);
        sum += (i-1)*modPow(i, n, m);
    }

    printf("%lld\n", sum % m);
    return 0;
}