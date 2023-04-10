/* 20. Troca Maior e Menor (++) */
#include <stdio.h>
 
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
 
    int mat[m][n], i, j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
        
    
    int maior=mat[0][0], imaior = 0, jmaior = 0;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                imaior = i; jmaior = j;
            }
        }
    }
 
    int menor=mat[0][0], imenor=0, jmenor=0;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
                imenor = i; jmenor = j;
            }
        }
    }
 
    mat[imenor][jmenor] = maior;
    mat[imaior][jmaior] = menor;
 
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }
 
return 0;
}