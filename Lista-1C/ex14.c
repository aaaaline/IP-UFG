/* 14. Salário (++) */
#include <stdio.h>
 
int main(){
    int matricula, flag=0;
    double horas, ValorHora, SalarioFinal;
    
    scanf("%d %lf %lf", &matricula, &horas, &ValorHora);
    
    while(matricula != flag || horas != flag || ValorHora != flag){
        SalarioFinal = horas*ValorHora;
        
        printf("%d %.2lf\n", matricula, SalarioFinal);
        
        scanf("%d %lf %lf", &matricula, &horas, &ValorHora);
    }
    
return 0;
}