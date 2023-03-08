/* 3. Imprimir Um Vetor na Ordem Inversa (+) */
#include <stdio.h>
#define N 5000
 
int main(){
    int vet[N], i, n;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
        
    for(i=n-1; i >=0; i--)
        printf("%d ", vet[i]);
    
return 0;
}