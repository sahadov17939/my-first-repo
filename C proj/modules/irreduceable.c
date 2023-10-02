#include <stdio.h>

int euler (int n)
{
    int i, result = n;

    for(i = 2; i * i <= n; i++){
        if (n % i == 0) result -= result / i;

        while (n % i == 0) n /= i;
    }

    if (n> 1) result -= result / n;
    return result;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        printf("%d\n", euler(n));
    }

    return 0;
}
