/* 1. Achei (+) */
#include <stdio.h>
#define N 100000
 
int main(){
    int vet[N], i, n, buscas, k, cont=0;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
        
    scanf("%d", &buscas);
    
    while(buscas > 0){
        scanf("%d", &k);
        
        for(i=0; i<n; i++){
            if(k == vet[i])
                cont++;    
        }
        
        if(cont == 0)
            printf("NAO ACHEI\n");
            
        else
            printf("ACHEI\n");
            
        buscas--;
        cont = 0;
    }
    
return 0;
}