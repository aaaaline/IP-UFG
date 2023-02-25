/* 11. Número Invertido (+++) */
#include <stdio.h>
 
int main(){
    int n, a, b, c, invert;
    scanf("%d", &n);
 
    a = n/100;
    b = n/10%10;
    c = n%10;
    invert = (c*100)+(b*10)+a;
    
    printf("%d\n", invert);
 
return 0;
}