/* 12. Número de finais (++) */
#include <stdio.h>
 
int main(){
    int times, i=1, k=1, j=1;
    
    scanf("%d", &times);
    
    if(times < 2)
        printf("Campeonato invalido!");
        
    else{
        while(j <= times){
            k = j;
            while(k <= times){
                if(k != j){
                    printf("Final %d: Time%d X Time%d\n", i, j, k);
                    i++;
                }  
                k++;
            }
            j++;
        } 
    }
    
return 0;
}