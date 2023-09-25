#include <stdio.h>

int nostra (int n){
    if (n == 1) return 2;
    if (n == 2) return 3;
    return nostra(n-1) + nostra(n-2);
}

int koza(int n){
    if (n == 1) return 2;
    if (n == 2) return 3;
    if (n == 3) return 4;
    return nostra(n-1) + nostra(n-3);
}

int main (void){
    int n;
    scanf ("%d", &n);
    printf ("%d", koza(n));
    
    return 0;
}