#include <stdio.h>

int countCows(int n, int m) {
    if (n == 1 || m == 1) {
        return 1;  // Base case: If either dimension is 1, only one cow is needed.
    }

    if (n % 2 == 0 || m % 2 == 0) {
        return 0;
    } else {
        // If both dimensions are odd, place a cow in the center and recurse on four smaller fields.
        return 1 + countCows(n / 2, m / 2) * 4;
    }
}

int main() {
    int n, m;

    // Input
    scanf("%d %d", &n, &m);

    // Output
    printf("%d\n", countCows(n, m));

    return 0;
}
