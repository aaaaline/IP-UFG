/* 19. Elementos Únicos (+++) */
#include <stdio.h>
#define N 1000
 
void ordena(int vet[N], int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(vet[i] > vet[j]){
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}
 
int main(){
    int n, i, vet[N], flag=0, j;
 
    scanf("%d", &n);
 
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
 
    ordena(vet, n);
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(vet[j] == vet[i])
                flag = 1;
        }
        
        if(flag == 0)
            printf("%d\n", vet[i]);
        
        flag = 0;
    }
    
return 0;
}