/* 18. CPF (+++) */
#include <stdio.h>
#define N 11
 
int main(){
    int testes, vet[N], i, j;
 
    scanf("%d", &testes);
 
    while(testes > 0){
        int b1=0, b2=0, soma=0;
 
        for(i=0; i<N; i++){
            scanf("%d", &vet[i]);
 
            soma += vet[i]; 
        }
 
        if(soma%11 != 0)
            printf("CPF invalido\n");
            
        else{
            j = 9;
            
            for(i=0; i<9; i++){
                b1 += vet[i]*(i+1);
                b2 += vet[i]*j;
                
                j--;
            }
            
            b1 = b1%11; b2 = b2%11; 
            
            if(b1 == 10) b1 = 0;
            if(b2 == 10) b2 = 0;
            
            if(b1 == vet[9] && b2 == vet[10])
                printf("CPF valido\n");
                
            else
                printf("CPF invalido\n");
        }
        testes--;
    } 
 
return 0;
}