#include <stdio.h>
 
int main(){
    int matricula, n_dependentes;
    double sal_min, sal_fun, taxa_imp, imp_bruto, imp_liquido, final;
 
    scanf("%d %lf %d %lf %lf", &matricula, &sal_min, &n_dependentes, &sal_fun, &taxa_imp);
 
    if(sal_fun/sal_min > 12){
        imp_bruto = sal_fun*0.2;
        imp_liquido = imp_bruto - 300.00*n_dependentes;
        final = imp_liquido - sal_fun*(taxa_imp/100);
    }
 
    else if(sal_fun/sal_min > 5 && sal_fun/sal_min <= 12){
        imp_bruto = sal_fun*0.08;
        imp_liquido = imp_bruto - 300.00*n_dependentes;
        final = imp_liquido - sal_fun*(taxa_imp/100);
    }
 
    else if(sal_fun/sal_min <= 5){
        imp_bruto = 0.00;
        imp_liquido = imp_bruto - 300.00*n_dependentes;
        final = imp_liquido - sal_fun*(taxa_imp/100);
    }
 
    if(final < 0)
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO A RECEBER\n", matricula, imp_bruto, imp_liquido, final);
    
    if(final == 0)
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO QUITADO\n", matricula, imp_bruto, imp_liquido, final);
 
    if(final > 0)
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO A PAGAR\n", matricula, imp_bruto, imp_liquido, final);
 
return 0;
}