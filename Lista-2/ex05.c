/* 5. Maior Elemento (+) */
#include <stdio.h>
#define N 10000
 
int main(){
    int n=1, vet[N], i, maior, indice;
 
    scanf("%d", &n);
 
    do{
        maior = 0; indice = 0;
        
        for(i=0; i<n; i++)
            scanf("%d", &vet[i]);
        
        for(i=0; i<n; i++){
            if(vet[i] > maior){
                maior = vet[i];
                indice = i;
            }
        }
 
        printf("%d %d\n", indice, maior);
 
        scanf("%d", &n);
 
    }while(n > 0);
 
return 0;
}