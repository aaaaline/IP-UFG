/* 10. Gerador de tabuada (++) */
#include <stdio.h>
 
int main(){
    double n, i, K, s;
    double i2, i3, i4, K2, K3, K4;
    
    scanf("%lf %lf %lf %lf", &n, &i, &K, &s);
    
    i2 = i; i3 = i; i4 = i;
    K2 = K; K3 = K; K4 = K; 
    
    printf("Tabuada de soma:\n");
    
    while(K > 0){
        printf("%.2lf + %.2lf = %.2lf\n", n, i, n+i);
        
        i += s; K--;
    }
    
    printf("Tabuada de subtracao:\n");
    
    while(K2 > 0){
        printf("%.2lf - %.2lf = %.2lf\n", n, i2, n-i2);
        
        i2 += s; K2--;
    }
    
    printf("Tabuada de multiplicacao:\n");
    
    while(K3 > 0){
        printf("%.2lf x %.2lf = %.2lf\n", n, i3, n*i3);
        
        i3 += s; K3--;
    }
    
    printf("Tabuada de divisao:\n");
    
    while(K4 > 0){
        printf("%.2lf / %.2lf = %.2lf\n", n, i4, n/i4);
        
        i4 += s; K4--;
    }
    
return 0;
}