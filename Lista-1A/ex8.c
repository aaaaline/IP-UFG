/* Custo Final de um Carro (++) */
#include <stdio.h>
 
int main(){
    double preco_fab, percent_dist, percent_imp, final;
 
    scanf("%lf %lf %lf", &preco_fab, &percent_dist, &percent_imp); 
 
    final = preco_fab + preco_fab*(percent_dist/100) + preco_fab*(percent_imp/100);
 
    printf("O VALOR DO CARRO E = %.2lf\n", final);
 
return 0;
}