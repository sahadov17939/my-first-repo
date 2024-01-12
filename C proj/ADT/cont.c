#include <stdio.h>

int main() {
    long long n;
    printf("type in the number from 1 to 10 (how much you love TANYA): ");
    scanf("%lld", &n);
    if (n != 10) {
        printf("WRONG!!!\n");
    } else {
        printf("<3<3<3\n");
    }
    
    return 0;
}
