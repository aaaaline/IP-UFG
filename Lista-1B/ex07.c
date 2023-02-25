/* 7. Valor de Y dado X (+) */
#include <stdio.h>
#include <math.h>
 
int main(){
    int x, y;
 
    scanf("%d", &x);
 
    if(x > 1)
        y = pow(x,2);
 
    else if(x == 1)
        y = 0;
 
    else if(x < 1)
        y = x;
    
    printf("Y = %d\n", y);
 
return 0;
}