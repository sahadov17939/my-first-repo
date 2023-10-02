#include <stdio.h>

#define MAX_N 65536

long long memo[MAX_N + 1];

long long domino(long long n) {
    if (n == 1) return 1LL;
    if (n == 2) return 2LL;

    
    if (memo[n] != 0) {
        return memo[n];
    }

    memo[n] = domino(n - 1) + domino(n - 2);
    return memo[n];
}

int main(void) {
    long long n;
    scanf("%lld", &n);

    for (int i = 0; i <= n; i++) {
        memo[i] = 0LL;
    }

    printf("%lld", domino(n));
    return 0;
}
