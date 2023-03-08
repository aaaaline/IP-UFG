/* 9. Distância entre pontos 3D (++) */
#include <stdio.h>
#include <math.h>
 
int main(){
    double d, v1[3], v2[3];
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i=0; i< 3; i++)
        scanf("%lf", &v1[i]);
        
    for(i=1; i<n; i++){
        for(j=0; j<3; j++)
            scanf("%lf", &v2[j]);
            
        d = sqrt(pow(v1[0] - v2[0],2) + pow(v1[1] - v2[1],2) + pow(v1[2] - v2[2],2));
        printf("%.2lf\n", d);
        
        for(j=0; j<3; j++)
            v1[j] = v2[j];
    }
    
return 0;
}