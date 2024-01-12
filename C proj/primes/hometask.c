#include <stdio.h>
#include <math.h>

int IsPrime(int n){
    for(int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) return 0;
    return 1;
}


int main(void){
    int n, i=1;
    scanf("%d", &n);

    if ( n == 4 ||IsPrime(n) == 1 && n != 1) {printf("NO"); return 0;};
    printf("YES");
    
    return 0;
}