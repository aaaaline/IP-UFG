/* 13. Sistemas de Equação Linear (++++) */
#include <stdio.h>

int main(){
    double a, b, c, d, e, f, x, y;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    
    x = ((c*e)-(b*f))/((a*e)-(b*d));
    y = ((a*f)-(c*d))/((a*e)-(b*d));
    
    printf("O VALOR DE X E = %.2lf\nO VALOR DE Y E = %.2lf\n", x, y);
 
return 0;    
}