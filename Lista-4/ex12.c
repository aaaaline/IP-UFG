/* 12. Cidade Segura (+++) */
#include <stdio.h>
 
int main(){
    int n;
 
    scanf("%d", &n);
 
    int Q[n+1][n+1], i, j;
 
    for(i=0; i<n+1; i++){
        for(j=0; j<n+1; j++){
            scanf("%d", &Q[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if((Q[i][j] + Q[i][j+1] + Q[i+1][j] + Q[i+1][j+1]) >= 2)
                printf("S");
            else
                printf("U");
            }
        printf("\n");
    }
    
return 0;
}