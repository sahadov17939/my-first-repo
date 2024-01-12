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
    int i=2, sum=0, cnt=0;
    while (1){
        if (IsPrime(i) == 1){
            sum += i;
            cnt++;
            if (sum % n == 0){
                printf("%d", cnt);
                return 0;
            }
            
        }
        i++;
    }
    return 0;
}