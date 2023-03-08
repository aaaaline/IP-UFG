/* 17. Índices da matriz inferior (+++) */
#include <stdio.h>
 
int main() {
    int m, n, i, j;
    scanf("%d %d", &m, &n);
 
    for(i=2; i<=m; i++){
        for(j=1; j<=n; j++){
            if(i == j)
                break;
 
            if((j+1 == i) || (j == n))
                printf("(%d,%d)\n", i, j);
 
            else
                printf("(%d,%d)-", i, j);
        }
    }
 
return 0;
}