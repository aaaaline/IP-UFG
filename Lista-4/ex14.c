/* 14. Frequência do Maior e Menor (+++) */
#include <stdio.h>
#define TM 1000
 
int main(){
    int matriz[TM][TM], n, m, i, j;
    
    scanf("%d %d", &m, &n);
    
    int maior=-999, menor=999; 
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
            
            if(matriz[i][j] > maior)
                maior = matriz[i][j];
            
            if(matriz[i][j] < menor)
                menor = matriz[i][j];
        }
    }
    
    double freqMaior=0, freqMenor=0, freqTotal;
    double percentMaior, percentMenor;
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(matriz[i][j] == maior)
                freqMaior++;
                
            else if(matriz[i][j] == menor)
                freqMenor++;
        }
    }
    
    freqTotal = m*n;
    
    percentMaior = (freqMaior/freqTotal)*100;
    percentMenor = (freqMenor/freqTotal)*100;
    
    printf("%d %.2lf%%\n", menor, percentMenor);
    printf("%d %.2lf%%\n", maior, percentMaior);
    
return 0;
}