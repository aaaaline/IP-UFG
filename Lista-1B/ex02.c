/* 2. Conta de Água (+) */
#include <stdio.h>
 
int main(){
    int conta;
    double consumo, valor_conta;
    char tipo_consumidor;
    
    scanf("%d %lf %c", &conta, &consumo, &tipo_consumidor);
    
    switch(tipo_consumidor){
        case 'R':
                valor_conta = 5.00 + 0.05*consumo;
                break;  
        
        case 'C':
                if(consumo > 80)
                    valor_conta = 500.00 + 0.25*(consumo-80);
                
                else
                    valor_conta = 500.00;
                break;
                
        case 'I':
                if(consumo > 100)
                    valor_conta = 800.00 + 0.04*(consumo-100);
                    
                else
                    valor_conta = 800.00;
    }
    
    printf("CONTA = %d\nVALOR DA CONTA = %.2lf\n", conta, valor_conta);
 
return 0;
}