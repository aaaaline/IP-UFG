/* 16. Companhia de Teatro (+++) */
#include <stdio.h>
#define despesas 200.00
 
int main(){
    double ValorIngresso, ValorInicial, ValorFinal;
    double lucro, MelhorValor, i, anterior=0, MaiorLucro;
    int NumIngressos, MaiorVenda;
    
    scanf("%lf %lf %lf", &ValorIngresso, &ValorInicial, &ValorFinal);
    
    i = ValorInicial;
    
    if(ValorInicial >= ValorFinal)
        printf("INTERVALO INVALIDO");
        
    else{
        while(i <= ValorFinal){
            if(i == ValorIngresso){
                NumIngressos = 120;
                
                lucro = NumIngressos*ValorIngresso - (despesas + NumIngressos*0.05);
            }
            
            else if(i < ValorIngresso){
                NumIngressos = 120 + 50*(ValorIngresso - i);
                
                lucro = NumIngressos*i - (despesas + NumIngressos*0.05);
            }
            
            else if(i > ValorIngresso){
                NumIngressos = 120 - 60*(i - ValorIngresso);
                
                lucro = NumIngressos*i - (despesas + NumIngressos*0.05);
            }
            
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, NumIngressos, lucro);
            
            if(lucro > anterior){
                MelhorValor = i;
                MaiorLucro = lucro;
                MaiorVenda = NumIngressos;
            }
            
            anterior = lucro;
            i++;
        }
        
        if(MaiorLucro > 0)
            printf("Melhor valor final: %.2lf\nLucro: %.2lf\nNumero de ingressos: %d\n", MelhorValor, MaiorLucro, MaiorVenda);
            
        else if(MaiorLucro < 0){
            MelhorValor = 0; MaiorLucro = 0; MaiorVenda = 0;
            
            printf("Melhor valor final: %.2lf\nLucro: %.2lf\nNumero de ingressos: %d\n", MelhorValor, MaiorLucro, MaiorVenda);
        }
    }
    
return 0;
}