/* 7. Cálculo da Área de um Triângulo (++) */
#include <stdio.h>
#include <math.h>
 
int main(){
    double L1, L2, L3, A, T;
 
    scanf("%lf %lf %lf", &L1, &L2, &L3);
    
    T = (L1+L2+L3)/2;
    A = sqrt(T*(T-L1)*(T-L2)*(T-L3));
 
    printf("A AREA DO TRIANGULO E = %.2lf\n", A);
    
return 0;
}