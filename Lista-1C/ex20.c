/* 20. Lucro de Mercadorias (+++) */
#include <stdio.h>
 
int main(){
    unsigned long int cod;
    double precoCompra, precoVenda, lucro=0, maiorLucro=0, maisVendida=0;
    int numVendas, maior10=0, menor10=0, maior20=0, codVenda, codLucro;
    double lucroTotal=0, totalVenda=0, totalCompra=0, lucroAnterior=0;
 
    while((scanf("%ld %lf %lf %d", &cod, &precoCompra, &precoVenda, &numVendas)) != EOF){
 
        lucro = ((precoVenda*100)/precoCompra)-100;
 
        if(lucro >= 10 && lucro <= 20)
            maior10++;
 
        if(lucro < 10)
            menor10++;
 
        if(lucro > 20)
            maior20++;
 
        if(numVendas > maisVendida){
            maisVendida = numVendas;
            codVenda = cod;
        }
 
        if(maiorLucro < lucro){
            maiorLucro = lucro;
            codLucro = cod;
        }
 
        totalVenda += precoVenda*numVendas;
        totalCompra += precoCompra*numVendas;
        lucro = 0;
    }
 
    lucroTotal = ((totalVenda*100)/totalCompra) - 100;
 
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", menor10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", maior10);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", maior20);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n", codLucro);
    printf("Codigo da mercadoria mais vendida: %d\n", codVenda);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", totalCompra, totalVenda, lucroTotal);
 
return 0;
}