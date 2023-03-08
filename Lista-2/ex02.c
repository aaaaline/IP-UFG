/* 2. Contagem (+) */
#include <stdio.h>
#define N 1000
 
int main(){
    int vet[N], i, n=0, cont=0, k;
    
    while(n < 1 || n > 1000)
        scanf("%d", &n);
    
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
        
    scanf("%d", &k);
    
    for(i=0; i<n; i++){
        if(vet[i] >= k)
            cont++;
    }
    
    printf("%d", cont);
    
return 0;
}