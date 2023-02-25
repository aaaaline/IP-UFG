/* 12. Valor em Notas e Moedas (+++) */
#include <stdio.h>

int main(){
    int valor, n100, x, n50, y, n10, z, m1;
    scanf("%d", &valor);
 
    if(valor >= 100){
        n100 = valor/100;
        x = valor%100;
    }
 
    if(x >= 50){
        n50 = x/50;
        y = x%50;
    }
 
    if(y >= 10){
        n10 = y/10;
        z = y%10;
    }
 
    if(z >= 1)
        m1 = z;
 
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", n100, n50, n10, m1);
 
return 0;
}