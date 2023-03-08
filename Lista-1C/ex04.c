/* 4. Série de pares (+) */
#include <stdio.h>
 
int main(){
    int n1, n2, i=1;
    
    scanf("%d %d", &n1, &n2);
    
    if(n1%2 != 0){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    
    else{
        for(i>0; i<=n2; i++){
            printf("%d ", n1);
            
            n1 += 2;
        }
        printf("\n");
    }
return 0;
}