#include <stdio.h>

long long mem[500000];

int chain(int num, int* arr, unsigned int n, int count){
    if (num == n-1) return count;
    
    int i = num+1;
    while (i<n){
        
        if (arr[i] > arr[num]){
            count++;
            if (mem[i] == 0) mem[i] = chain(i, arr, n, count);
            return mem [i];
        }
        
        i++;
    }
    return count;
}

int main (void){

    unsigned int n;

    scanf("%d", &n);
    int arr[n], count;
    
    for (int i=0; i<n; i++){
        scanf ("%d", &arr[i]);
    }
    
    for (int i=0; i<n; i++){
        count = 0;
        count = chain(i, arr, n, count);
        printf ("%d ", count);
    }

    return 0;
}
