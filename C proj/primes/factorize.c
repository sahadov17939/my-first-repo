#include <stdio.h>
#include <math.h>
int n;

void factor(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int c = 0;
        if (n % i) continue;
        while(n % i == 0) n /= i, c++;
        if (c > 1) printf("%d^%d",i,c); else printf("%d",i);
        if (n > 1) printf("*");
    }
    if (n > 1) printf("%d",n);
    printf("\n");
}

int main (){
    scanf("%d", &n);
    factor(n);
    return 0;
}