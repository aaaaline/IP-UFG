/* 14. Mediana (++) */
#include <stdio.h>
#define N 100000
 
void ordena(double vet[N], int tamVet){
    int i, j;
    for(i=0; i<tamVet; i++){
        for(j=i; j<tamVet; j++){
            if(vet[i] > vet[j]){
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}
 
int main(){
    int tamVet, i;
    double vet[N], mediana;
 
    scanf("%d", &tamVet);
 
    for(i=0; i<tamVet; i++)
        scanf("%lf", &vet[i]);
 
    ordena(vet, tamVet);
 
    int m = tamVet/2;
 
    if(tamVet%2 != 0)
        mediana = vet[m];
 
    else if(tamVet%2 == 0){
        mediana = (vet[m] + vet[m-1])/2;
    }
 
    printf("%.2lf", mediana);
 
return 0;
}