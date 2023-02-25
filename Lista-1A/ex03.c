/* 3. Custo da Lata de Cerveja */
#include <stdio.h>
#include <math.h>
#define pi 3.14159
 
int main(){
    double r, h, custo, At;
 
    scanf("%lf %lf", &r, &h);
 
    At = 2*(pi*pow(r,2))+(2*pi*r*h);
 
    custo = At*100.00;
 
    printf("O VALOR DO CUSTO E = %.2lf\n", custo);
 
return 0;
}