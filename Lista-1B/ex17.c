/* 17. Ordena 4 números (+++) */
#include <stdio.h>
 
int main(){
    double a, b, c, d;
 
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
 
    if(a < b && b < c && c < d)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", a, b, c, d);
    
    else if(a < b && b < d && d < c)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", a, b, d, c);
 
    else if(a < c && c < b && b < d)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", a, c, b, d);
 
    else if(a < c && c < d && d < b)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", a, c, d, b);
 
    else if(a < d && d < b && b < c)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", a, d, b, c);
 
    else if(a < d && d < c && c < b)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", a, d, c, b);
 
    else if(b < a && a < c && c < d)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", b, a, c, d);
    
    else if(b < a && a < c && c < d)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", b, a, c, d);
 
    else if(b < a && a < d && d < c)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", b, a, d, c);
    
    else if(b < c && c < a && a < d)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", b, c, a, d);
 
    else if(b < c && c < d && d < a)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", b, c, d, a);
 
    else if(b < d && d < a && a < c)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", b, d, a, c);
 
    else if(b < d && d < c && c < a)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", b, d, c, a);
 
    else if(c < a && a < b && b < d)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", c, a, b, d);
 
    else if(c < a && a < d && d < b)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", c, a, d, b);
 
    else if(c < b && b < a && a < d)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", c, b, a, d);
 
    else if(c < b && b < d && d < a)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", c, b, d, a);
 
    else if(c < d && d < a && a < b)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", c, d, a, b);
 
    else if(c < d && d < b && b < a)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", c, d, b, a);
 
    else if(d < a && a < b && b < c)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", d, a, b, c);
 
    else if(d < a && a < c && c < b)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", d, a, c, b);
 
    else if(d < b && b < a && a < c)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", d, b, a, c);
 
    else if(d < b && b < c && c < a)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", d, b, c, a);
 
    else if(d < c && c < a && a < b)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", d, c, a, b);
 
    else if(d < c && c < b && b < a)
        printf("%.2lf, %.2lf, %.2lf, %.2lf", d, c, b, a);
 
return 0;
}