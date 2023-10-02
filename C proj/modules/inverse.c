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

int main() {
    long long n;
    
    scanf("%lld", &n);
    for (int i = 1;i<n; i++){
        printf("%lld ", modPow(i, n-2, n) % n);
    }
    
    return 0;
}
