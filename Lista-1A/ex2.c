/* 2. Conversões para o Sistema Métrico (+) */
#include <stdio.h>
 
int main(){
    double F, pol, C, mm;
 
    scanf("%lf %lf", &F, &pol);
 
    C = (5*(F-32))/9;
    mm = 25.4*pol;
 
    printf("O VALOR EM CELSIUS = %.2lf\nA QUANTIDADE DE CHUVA E = %.2lf\n", C, mm);
 
return 0;
}