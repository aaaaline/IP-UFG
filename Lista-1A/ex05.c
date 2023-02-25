/* 5. Volume da Pirâmide de Base Hexagonal (+) */
#include <stdio.h>
#include <math.h>
 
int main(){
    double h, a, V, Ab;
 
    scanf("%lf %lf", &h, &a);
 
    Ab = (3*pow(a,2)*sqrt(3))/2;
    V = (Ab*h)/3;
 
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", V);
    
return 0;
}