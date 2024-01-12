#include <stdio.h>
#include <math.h>

int IsPrime(int n){
    for(int i = 2; i <= sqrt(n); i++)
    if (n % i == 0) return 0;
    return 1;
}


int main(void){
    int n;
    
    scanf("%d", &n);
    int count=0;
    if (n == 0) printf ("1");
    else if (IsPrime(n+1)) printf ("2");
    else {
        
        for (int i=1; i<= (n+1)/2; i++){
            if ((n+1) % i == 0) count++;
        }
        printf ("%d", count + 1);
    }

    //printf ("%d %d\n", IsPrime(n), IsPrime(m));
    return 0;
}