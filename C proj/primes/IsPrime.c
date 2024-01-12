#include <stdio.h>
#include <math.h>


int IsPrime(int n){
    for(int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) return 0;
    return 1;
}


int main(void){
    int n, m;
    
    scanf("%d %d", &n, &m);

    printf ("%d %d\n", IsPrime(n), IsPrime(m));
    return 0;
}