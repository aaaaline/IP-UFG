/* 7. Ampulheta (++) */
#include <stdio.h>
 
int main(){
    int M[6][6], i, j, soma, maiorSoma=-999;
    
    for(i=0; i<6; i++)
        for(j=0; j<6; j++)
            scanf("%d", &M[i][j]);
            
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            soma = 0;
            soma += M[i][j] + M[i][j+1] + M[i][j+2] + M[i+1][j+1] + M[i+2][j] + M[i+2][j+1] + M[i+2][j+2];
        
            if(soma > maiorSoma)
                maiorSoma = soma;
        }
    }
    
    printf("%d\n", maiorSoma);
    
return 0;
}