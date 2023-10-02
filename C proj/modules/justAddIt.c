#include <stdio.h>
#define module 10000007

long long memo[200000000];

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

int main() {
    long long n, k;
    while (scanf("%lld %lld", &n, &k)){
        if (n == 0 && k == 0) return 0;
        long long total = modPow(n, k, module) + 2*modPow(n-1, k, module) + modPow (n, n, module) + 2*modPow(n-1,n-1,module);
        total %= module;
        printf("%lld\n", total);
        
    }
    return 0;
}
    