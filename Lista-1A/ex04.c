/* 4. Cálculo do Delta na Equação de Báskara */
#include <stdio.h>
#include <math.h>
 
int main(){
    double a, b, c, delta;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    delta = pow(b,2)-4*a*c;
 
    printf("O VALOR DE DELTA E = %.2lf\n", delta);
 
return 0;
}