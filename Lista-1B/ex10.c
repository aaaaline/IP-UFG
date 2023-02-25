/* 10. Ordena 3 números (++) */
#include <stdio.h>
 
int main(){
    double n1, n2, n3;
    
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    
    if(n1 <= n2 && n2 <= n3)
        printf("%.2lf, %.2lf, %.2lf", n1, n2, n3);
        
    else if(n1 < n3 && n3 < n2)
        printf("%.2lf, %.2lf, %.2lf", n1, n3, n2);
        
    else if(n2 <= n1 && n1 <= n3)
        printf("%.2lf, %.2lf, %.2lf", n2, n1, n3);
        
    else if(n2 < n3 && n3 < n1)
        printf("%.2lf, %.2lf, %.2lf", n2, n3, n1);
        
    else if(n3 <= n1 && n1 <= n2)
        printf("%.2lf, %.2lf, %.2lf", n3, n1, n2);
        
    else if(n3 < n2 && n2 < n1)
        printf("%.2lf, %.2lf, %.2lf", n3, n2, n1);
    
return 0;
}