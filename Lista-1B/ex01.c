/* 1. Aprovado ou Reprovado (+) */
#include <stdio.h>

int main(){
    double n1, n2, n3, media;
    
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    
    media = (n1+n2+n3)/3;
    
    if(media < 6.00)
        printf("MEDIA = %.2lf\nREPROVADO\n", media);
    
    else
        printf("MEDIA = %.2lf\nAPROVADO\n", media);
        
return 0;
}