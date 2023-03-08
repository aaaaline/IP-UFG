/* 27. Série de Taylor para a função cosseno (++++) */
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
    double x, sen;
    
    scanf("%lf %d", &x, &n);
    
    for(i=0; i<=n; i++)
        sen += (pow(-1,i)*pow(x,2*i))/fatorial(2*i); 
    
    printf("cos(%.2lf) = %.6lf", x, sen);
    
return 0;
}