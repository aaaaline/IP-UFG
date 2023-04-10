/* 2. Diagonal Principal (+) */
#include <stdio.h>
#define TM 1000
 
int main(){
    int A[TM][TM], n, i, j;
 
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &A[i][j]);
            
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(A[i] == A[j])
                printf("%d\n", A[i][j]);
        }
    }
 
return 0;
}