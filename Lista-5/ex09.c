/* 9. Distância entre pontos (++) */
#include<stdio.h>
#include<math.h>
 
struct dimensao{
  double u, x, y, z;
};
 
int main(){
    int i;
    int n; scanf("%d", &n);
    double d;
 
    struct dimensao a[n];
 
    for(i = 0; i < n; i++){
        scanf("%lf", &a[i].u);
        scanf("%lf", &a[i].x);
        scanf("%lf", &a[i].y);
        scanf("%lf", &a[i].z);
    }
 
    for(i = 0; i < n-1; i++){
        d = sqrt(pow(a[i].u - a[i+1].u, 2) + pow(a[i].x - a[i+1].x, 2) + pow(a[i].y - a[i+1].y, 2) + pow(a[i].z - a[i+1].z, 2));
 
        printf("%.2lf\n", d);
    }
 
return 0;
}