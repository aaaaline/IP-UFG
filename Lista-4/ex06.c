/* 6. Quadrado de matriz 2x2 (++) */
#include <stdio.h>
 
int main(){
    double A[2][2];
    int i, j;
 
    for(i=0; i<2; i++)
        for(j=0; j<2; j++) 
            scanf("%lf", &A[i][j]);
 
    double A2[2][2];
    int lin, col, soma;
 
    for(lin=0; lin<2; lin++){
        for(col=0; col<2; col++){
            soma = 0;
 
            for(i=0; i<2; i++)
                soma += A[lin][i]*A[i][col];
      
            A2[lin][col] = soma;
        }
    }
 
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%.3lf ", A2[i][j]);
        }
        printf("\n");
    }
 
return 0;
}