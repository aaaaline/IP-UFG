/* 10. Quatro Algarismos (++) */
#include <stdio.h>
 
int main(){
    int n, a, b, c, x, total;
    
    scanf("%d", &n);
 
    a = n/100;
    b = n/10%10;
    c = n%10;
    x = (a+(b*3)+(c*5))%7;
    total = n*10+x;
 
    printf("O NOVO NUMERO E = %d\n", total);
 
return 0;
}