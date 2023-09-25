#include <stdio.h>

int n, cnt = 0;

int main(void){
    scanf ("%d", &n);

    if (n == 1) {printf ("1"); return 0;}
    for (int i=1; i<=n/2; i++){
        if (n % i == 0) {cnt++;printf ("%d ", i);}
        
    }
    printf ("%d", n);
    return 0;
}