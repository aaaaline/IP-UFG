/* 13. Número primo (++) */
#include <stdio.h>
 
int main(){
    int n, i=1, cont=0;
    
    scanf("%d", &n);
    
    if(n < 0)
        printf("Numero invalido!");
 
    else if(n == 0)
        printf("NAO PRIMO");
        
    else{
        while(i <= n){
 
            if(n%i == 0)
                cont++;
        
            i++;
        }
        
        if(cont > 2 || n == 1)
            printf("NAO PRIMO");
            
        else
            printf("PRIMO");
    }
        
return 0;
}