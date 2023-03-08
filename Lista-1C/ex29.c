/* 29. Série de Taylor para a função seno (++++) */
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
    double x, y;
    
    scanf("%lf %d", &x, &n);
    
    for(i=0; i<=n; i++)
        y += (pow(-1,i)*pow(x,2*i + 1))/fatorial(2*i + 1); 
    
    printf("seno(%.2lf) = %.6lf\n", x, y);
    
return 0;
}