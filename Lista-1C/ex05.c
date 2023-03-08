/* 5. Soma de progressão aritmética (+) */
#include <stdio.h>
 
int main(){
    int vi, r, n, i, soma=0;
 
    scanf("%d %d %d", &vi, &r, &n);
 
    for(i=0; i<n; i++){
 
        soma += vi;
        vi += r;
    }
 
    printf("%d\n", soma);
 
return 0;
}