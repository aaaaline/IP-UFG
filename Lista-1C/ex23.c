/* 23. Número perfeito (+++) */
#include <stdio.h>
 
int main(){
    int n, i=1, soma=0;
    
    scanf("%d", &n);
    
    while(i < n){  
        if(n%i == 0){
            soma += i;
        
            if(i == 1)
                printf("%d = %d ", n, i);
            
            else if(n%i == 0 && i > 1)
                printf("+ %d ", i);
        }   
        
        i++;
    }
    
    if(soma == n)
            printf("= %d (NUMERO PERFEITO)", soma);
            
    else if(soma != n)
        printf("= %d (NUMERO NAO E PERFEITO)", soma);
    
return 0;
}