/* 10. Operações matriciais (++) */
#include <stdio.h>
 
int main(){
    int tam, OP=0, tr=0;
    
    scanf("%d", &tam);
    
    int A[tam][tam], i, j, At[tam][tam];
    
    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++)
            scanf("%d", &A[i][j]);
    
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            At[i][j] = A[j][i];
            
            if(i == j)
                tr = tr + A[i][j];
        }
    }
    
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            OP = 0;
            OP = tr * A[i][j] + At[i][j];
            
            printf("%d ", OP);   
        }
        printf("\n");
    }
    
return 0;
}