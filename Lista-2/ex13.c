/* 13. Maior Frequência (++) */
#include <stdio.h>
#define N 1000000
 
int main(){
    int n, vet[N], i, j;
    scanf("%d", &n);
    
    int vetResultante[2];
 
    vetResultante[0] = 0;
    vetResultante[1] = 0;
 
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
 
 
    for(i=0; i<n; i++){
        int cont = 0;
        
        for(j=0; j<n; j++){
            if(vet[i] == vet[j]){
                cont++;
            }
        }
        
        if(cont > vetResultante[1]){
            vetResultante[1] = cont;
            vetResultante[0] = vet[i];
        }
        
        else if(cont == vetResultante[1]){
            if(vetResultante[0] > vet[i]){
                vetResultante[0] = vet[i];
            }
        }
    }
 
    printf("%d\n", vetResultante[0]);
    printf("%d\n", vetResultante[1]);
    
return 0;
}