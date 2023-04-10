/* 4. Ler e imprimir (+) */
#include <stdio.h>
 
int main(){
    int lin=0, col=0;
 
    while(lin < 1 || lin > 10)
        scanf("%d", &lin);
    
    while(col < 1 || col > 10)
        scanf("%d", &col);
        
    int A[lin][col], i, j;
 
    for(i=0; i<lin; i++)
        for(j=0; j<col; j++)
            scanf("%d", &A[i][j]);
 
    for(i=0; i<lin; i++){
        printf("linha %d: ", i+1);
        
        for(j=0; j<col; j++){
            if(j == col-1)
                printf("%d", A[i][j]);
                
            else
                printf("%d,", A[i][j]);
        }
        printf("\n");
    }
    
return 0;
}