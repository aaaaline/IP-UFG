#include <stdio.h>
 
int main(){
    double a, b, c, A, P;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    P = a + b + c;
    A = ((a + b)*c)/2;
    
    if(((b-c)<a) && (a<(b+c)) && ((a-c)<b) && (b<(a+c)) && ((a-b)<c) && (c<(a+b)))
        printf("Perimetro = %.1lf\n", P);
 
    else
        printf("Area = %.1lf\n", A);     
    
return 0;
}