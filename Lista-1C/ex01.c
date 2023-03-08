/* 1. Arrecadação de Jogos (+) */
#include <stdio.h>
#include <math.h>
 
int main(){
    int testes, pessoas, i=1;
    double popular, geral, arquibancada, cadeiras, renda;
    
    scanf("%d", &testes);
    
    for(i>0; i<=testes; i++){
        scanf("%d %lf %lf %lf %lf", &pessoas, &popular, &geral, &arquibancada, &cadeiras);
        
        renda = pessoas*(popular/100) + (pessoas*(geral/100))*5.00 + (pessoas*(arquibancada/100))*10.00 + (pessoas*(cadeiras/100))*20.00;
        
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda);
    }
return 0;
}