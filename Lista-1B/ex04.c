/* 4. Locadora de Charretes (+) */
#include <stdio.h>
 
int main(){
    int horas;
    double v1, v2, total;
 
    scanf("%d", &horas);
 
    v1 = (horas/3)*10.00;
    v2 = (horas%3)*5.00;
    total = v1 + v2;
 
    printf("O VALOR A PAGAR E = %.2lf\n", total);
 
return 0;
}