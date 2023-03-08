/* 12. Ordena Lista (++) */
#include <stdio.h>
#define N 1000
 
void troca (int *x, int* y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}
void bubble(int v[], int n){
    int  i,j;
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (v[j]>v[j+1]) {
                troca(&v[j], &v[j+1]);
            }
        }
    }
}
void imprimeVet(int* v, int n){
    int i;
    for (i=0; i<n; i++){
    printf("%d\n", v[i]);
    }
}
 
int main(){
    int vet[N], n, i;
    scanf("%d", &n);
 
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
 
    bubble(vet, n);
    imprimeVet(vet, n);
 
 
return 0;
}