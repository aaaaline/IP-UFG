/* 11. Maior segmento crescente de uma sequência (++) */
#include <stdio.h>
 
int main(){
    int n, i=1, seq=0, valor_ant, valor_atual, maior=-1;
 
    scanf("%d", &n);
    scanf("%d", &valor_ant);
    
    do{
        scanf("%d", &valor_atual);
        
        if(valor_atual > valor_ant)
            seq++;
            
        else
            seq = 0;
            
        if(maior < seq)
            maior = seq;
            
        valor_ant = valor_atual;
        i++;
    }while(i < n);
    
    printf("O comprimento do segmento crescente maximo e: %d\n", maior);
 
return 0;
}