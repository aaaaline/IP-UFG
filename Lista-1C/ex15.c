/* 15. Cálculo da raiz quadrada (+++) */
#include <stdio.h>
 
int main(){
   double e, erro, r0=1, r, n;
   
   scanf("%lf",&n);
   scanf("%lf",&e);
   
   do{  
        r = (r0+(n/r0))/2.0;
        erro = (n-r*r);
        
        if(erro < 0)
            erro = -erro;
            
        printf("r: %.9lf, erro: %.9lf\n",r, erro);
        r0 = r;
        
   }while(erro > e);
   
return 0;
}