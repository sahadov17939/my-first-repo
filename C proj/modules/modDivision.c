#include <stdio.h>
#include <math.h>
#define module 1000000007
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
    long long a, n;
    scanf ("%lld %lld", &a, &n); 
    printf("%lld\n", modPow(a, modPow(2,n-1, 4000), 10000));

   
    
    return 0;
}
