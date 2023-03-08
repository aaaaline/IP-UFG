/* 20. Máxima Coordenada (+++) */
#include <stdio.h>
 
int main(){
    double a[3], b[3], AB[3];
    int i, n, j, k;
 
    scanf("%d", &n);
 
    for(i=0; i<3; i++)
        scanf("%lf", &a[i]);
 
    for(i=1; i<n; i++){
        for(j=0; j<3; j++)
            scanf("%lf", &b[j]);
        
        double maior=-9999;
        
        for(k=0; k<3; k++){
            AB[k] = b[k] - a[k];
        
            if(AB[k] < 0)
                AB[k] = -AB[k];
 
            if(AB[k] > maior)
                maior = AB[k];
        }
 
        printf("%.2lf\n", maior);
 
        for(j=0; j<3; j++)
            a[j] = b[j];
    }
 
return 0;    
}