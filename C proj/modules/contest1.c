#include <stdio.h>
#include <string.h>

void swapper(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int t;
    //int minJ=1000000000, maxJ=0, minG=1000000000, maxG=0;
    int n, m, k;
    scanf ("%d", &t);
    for (int someInt=0; someInt < t; someInt++){
        int minJ=1000000000, maxJ=0, minG=1000000000, maxG=0;
        scanf ("%d %d %d", &n, &m, &k);
        int arrJ[n], arrG[m];
        for (int i=0; i<n; i++){
            scanf("%d", &arrJ[i]);
        }
        for (int i=0; i<m; i++){
            scanf("%d", &arrG[i]);
        }

        for (int i=0; i<n; i++){
            if (arrJ[i] <= minJ) minJ = arrJ[i];
            if (arrJ[i] >= maxJ) maxJ = arrJ[i];
        }
        for (int i=0; i<m; i++){
            if (arrG[i] <= minG) minG = arrG[i];
            if (arrG[i] >= maxG) maxG = arrG[i];
        }
        int sum=0;
        for (int i=0; i<n; i++){
            sum += arrJ[i];
        }

        if (k % 2 == 1 || k == 1){
            
            if (minJ <= maxG){    
                printf ("%d\n", sum + maxG - minJ);
            }
            else printf("%d\n", sum);
        }
        else if (k % 2 == 0){
            if (minJ <= maxG){    
                printf ("%d\n", sum);
            }
            else printf("%d\n", sum + minG - maxJ);
        }
    }

    return 0;
}
