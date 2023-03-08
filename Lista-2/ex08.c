/* 8. Conversão de Decimal para Binário (++) */
#include <stdio.h>
 
int main(){
    int n, bin[32], i=0, j;
 
    while((scanf("%d", &n)) != EOF){
        if(n == 0){
            bin[i] = 0;
            printf("%d\n", bin[i]);
        }
        
        else{
            while(n > 0){
                bin[i] = n%2;
                
                n /= 2; i++; 
            }
            
            for(j = i-1; j >= 0; j--)
                printf("%d", bin[j]);
                
            printf("\n");
        }
        
        i = 0; j = 0;
    }
return 0;
}