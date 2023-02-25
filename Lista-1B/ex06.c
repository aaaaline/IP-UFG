/* 6. Reajuste Salarial (+) */
#include <stdio.h>
 
int main(){
    double salario, reajuste;
 
    scanf("%lf", &salario);
 
    if(salario > 300.00)
        reajuste = salario + salario*0.3;
    
    else
        reajuste = salario + salario*0.5;
    
    printf("SALARIO COM REAJUSTE = %.2lf\n", reajuste);
 
return 0;
}