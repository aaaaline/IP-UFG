/* 9. Decolagem (++) */
#include <stdio.h>
 
int main(){
    double m, a, t, W, vm, s, vkm;
 
    scanf("%lf %lf %lf", &m, &a, &t);
        
    vm = a*t;
    vkm = vm*3.6;
    s = (a*(t*t))/2;
    W = ((m*1000)*(vm*vm))/2;
 
    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", vkm, s, W);
 
return 0;
}