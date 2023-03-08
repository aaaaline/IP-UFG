/* 2. Conversão de temperatura (+) */
#include <stdio.h>
 
int main(){
    int n, i=0;
    float F, C;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%f", &F);
        
        C = (5*(F-32))/9;
        
        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", F, C);
    }
 
return 0;
}