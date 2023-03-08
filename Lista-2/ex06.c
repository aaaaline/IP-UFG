/* 6. Soma Elementos do Vetor (+) */
#include <stdio.h>
#define N 1000
 
int main(){
    int n, vet[N], i, soma=0;
 
    scanf("%d", &n);
 
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
 
    for(i=0; i<n; i++)
        soma += vet[i];
 
    printf("%d", soma);
 
return 0;
}