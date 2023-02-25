/* 11. Raizes de equações de grau 2 (++) */
#include <stdio.h>
#include <math.h>
 
int main(){
    double a, b, c, x1, x2, delta;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    delta = pow(b,2) - 4*a*c;
 
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
 
    if(delta == 0)
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    
    else if(delta > 0){
        if(x1 < x2)
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
        
        else 
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x2, x1);
    }
 
    else if(delta < 0)
        printf("RAIZES IMAGINARIAS\n");
    
 
return 0;
}