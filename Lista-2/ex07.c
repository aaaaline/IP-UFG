/* 7. Acumulado de Elementos (++) */
#include <stdio.h>
#define N 10000
 
int main(){
    int n, vet[N], i, maior=-9999, j;
    
    scanf("%d", &n);
    
    do{
        for(i=0; i<n; i++){
            scanf("%d", &vet[i]);
            
            if(vet[i] > maior){
                maior = vet[i];
            }
        }
        
        for(j=0; j<=maior; j++){
            printf("(%d) ", j);
            
            int cont=0;
            
            for(i=0; i<n; i++){
                if(vet[i] <= j)
                    cont++;
            }
            
            printf("%d\n", cont);
        }
        
        scanf("%d", &n); maior=-9999;
        
    } while(n != 0);
    
return 0;
}