#include <stdio.h>

long long memo[50000];

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

long long res (int i){
    if (i == 1) return 1;
    if (memo[i-1] == 0) memo[i-1] = res(i-1); 
    return memo[i-1] + 2*euler(i);
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

        printf("%d\n", res(n));
    }

    return 0;
}
