/* 1. Determinante 2x2 (+) */
#include <stdio.h>
 
int main(){
    int A[2][2], i, j;
 
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &A[i][j]);
            
    double dp=1, ds=1, dA=0;
 
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if(A[i] == A[j])
                dp *= A[i][j];
 
            if(A[i] != A[j])
                ds *= A[i][j]; 
        }
    }
    
    printf("%.2lf", dA = dp-ds);
    
return 0;
}