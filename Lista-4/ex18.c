/* 18. Matriz Ordenada (+++) */
#include <stdio.h>
 
int main(){
    int tm;
    
    scanf("%d", &tm);
    
    int matriz[tm][tm], i, j, aux, k;
    
    for(i=0; i<tm; i++)
        for(j=0; j<tm; j++)
            scanf("%d", &matriz[i][j]);
    
     for(k=0; k<tm; k++){       
        for(i=0; i<tm; i++){
            for(j=0; j<tm-1; j++){
                if(matriz[j][i] > matriz[j+1][i]){
                    aux = matriz[j][i];
                    matriz[j][i] = matriz[j+1][i];
                    matriz[j+1][i] = aux;
                }
            }
        }   
    }
    
    for(i=0; i<tm; i++){
        for(j=0; j<tm; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
return 0;
}