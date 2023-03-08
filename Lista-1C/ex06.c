/* 6. Somatório simples (+) */
#include <stdio.h>
#include <math.h>
 
int main(){
    int n, i=1;
    double soma=0;
    
    scanf("%d", &n);
    
    if(n < 1)
        printf("Numero invalido!");
    
    else{
        for(i>0; i<=n; i++){
            soma += pow(i,-1);
        }
    
        printf("%.6lf", soma);
    }
 
return 0;
}