/* 3. Quadrado de pares (+) */
#include <stdio.h>
#include <math.h>
 
int main(){
    int n, i=0, quadrado, k=2;
    
    scanf("%d", &n);
    
    while(i < n/2){
        
        quadrado = pow(k,2);
        
        printf("%d^2 = %d\n", k, quadrado);
        k += 2;
        i++;
    }
return 0;
}