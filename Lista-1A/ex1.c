/* 1. Consumo de energia (+) */
#include <stdio.h>
 
int main(){
    double sal_min, qtd_kw, custo_kw, consumo, desconto;
 
    scanf("%lf %lf", &sal_min, &qtd_kw);
 
    custo_kw = (0.7*sal_min)/100;
 
    consumo = custo_kw*qtd_kw;
 
    desconto = 0.9*consumo;
 
    printf("Custo por kW: R$ %.2lf\nCusto do consumo: R$ %.2lf\nCusto com desconto: R$ %.2lf\n", custo_kw, consumo, desconto);
    
return 0;
}