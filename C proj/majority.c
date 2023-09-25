#include <stdio.h>
int main (void){
    int m[110];

    int maj, cnt, n, res;

    scanf("%d",&n);
    for(int i = 0; i < n; i++) scanf("%d",&m[i]);

    maj = 0; cnt = 0;

    for(int i = 0; i < n; i++) {
        if (cnt == 0) {maj = m[i]; cnt++;}
        else if (m[i] == maj) cnt++;
        else cnt--; 
    }

    cnt = 0;
    for(int i = 0; i < n; i++) if (m[i] == maj) cnt++;

    if(2 * cnt > n) res = maj; else res = -1;

    printf("%d\n",res);

    return 0;
}

