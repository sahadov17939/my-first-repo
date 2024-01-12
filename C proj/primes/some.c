#include <stdio.h>

void solve(int n) {
    int ans = 0;

    for (int y = n + 1; y <= n * n + n; y++) {
        if ((n * n) % (y - n) == 0) {
            ans += 1;
        }
    }

    printf("%d", ans);
}

int main() {
    int n;

    scanf("%d", &n);

    solve(n);

    return 0;
}
