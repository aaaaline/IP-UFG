/* 25. Transforma decimal em fração (+++) */
#include <stdio.h>
#include <math.h>
 
int main(){
    double n;
    int num=0, den, i, cont=0;
    
    scanf("%lf", &n);
    
    num = n;
    
    while(num != n){
        n = n*10;
        num = n;
        cont++;
        den = pow(10,cont);
    }
    
    if(n > den){
           for(i=2; i<n; i++){
               if(num%i == 0 && den%i == 0){
                   den = den/i;
                   num = num/i;
               }
            }
        }
        
        if(n < den){
           for(i=2; i<den; i++){
               if(num%i == 0 && den%i == 0){
                   den = den/i;
                   num = num/i;
               }
            }
        }
        
        printf("%d/%d\n", num, den);
 
return 0;
}