#include <stdio.h>

void chain(int i, int* arr, unsigned int n, int count){
    
}

int main (void){

    unsigned int n;

    scanf("%d", &n);
    int arr[n];
    
    for (int i=0; i<n; i++){
        scanf ("%d", &arr[i]);
    }
    
    chain(0, arr, n, 0);

    return 0;
}

