/* 17. Contagem de Elementos Únicos (+++) */
#include <stdio.h>
 
int main(){
    int n, elementos=0, i, j, flag=0;
 
    scanf("%d", &n);
 
    int vet[n];
 
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(vet[i] == vet[j]){
                flag++;
            }
        }
 
        if(flag == 1)
            elementos++;
            
        flag = 0;
    }
 
    printf("%d\n", elementos);
    
return 0;
}