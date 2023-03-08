/* 10. Frequência e Maior (++) */
#include <stdio.h>
#define N 10000
 
int main(){
    int n, notas[N], i, maior=-1, indMaior=0, nota;
 
    scanf("%d", &n);
 
    for(i=0; i<n; i++){
        scanf("%d", &notas[i]);
        nota = notas[i];
 
        if(notas[i] > maior){
            maior = notas[i];
            indMaior = i;
        }
    }
 
    int ultima = nota, cont=0;
 
    for(i=0; i<n; i++){
        if(notas[i] == ultima){
            cont++;
        }
    }
 
    printf("Nota %d, %d vezes\n", ultima, cont);
    printf("Nota %d, indice %d\n", maior, indMaior);
 
return 0;
}