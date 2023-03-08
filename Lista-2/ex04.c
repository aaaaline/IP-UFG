/* 4. Ler e Imprimir (+) */
#include <stdio.h>
#define N 5000
 
int main(){
    int vet[N], i, n;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
        
    for(i=0; i < n; i++)
        printf("%d ", vet[i]);
    
return 0;
}