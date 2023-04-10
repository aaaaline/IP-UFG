/* 3. Diagonal Secundária (+) */
#include <stdio.h>
#define TM 1000
 
int main(){
    int M[TM][TM], tam, i, j;
 
    scanf("%d", &tam);
 
    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++)
            scanf("%d", &M[i][j]);
 
    for(i=0; i<tam;i++){
        for(j=0; j<tam; j++){
            if(j+i == tam-1)
                printf("%d\n", M[i][j]);
        }
    }
 
return 0;
}