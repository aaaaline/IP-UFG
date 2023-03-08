/* 28. Série de Taylor para a função e^x (++++) */
#include <stdio.h>
#include <math.h>
 
long int fatorial(int n){
    if(n == 0)  
        return 1;
    
    else 
        return n*fatorial(n-1);
}
 
int main(){
    int n, i;
    double x, soma;
    
    scanf("%lf %d", &x, &n);
    
    for(i=0; i<=n; i++)
        soma += pow(x,i)/fatorial(i); 
    
    printf("e^%.2lf = %.6lf", x, soma);
    
return 0;
}