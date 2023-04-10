/* 5. Zero Vale Zero (+) */
#include <stdio.h>
#include <string.h>
#define N 10000
 
int main(){
    int n1, n2;
    char soma[N];
 
    do{
        scanf("%d %d", &n1, &n2);
        sprintf(soma, "%d", n1+n2);
 
        int tamSoma = strlen(soma), i;
 
        for(i=0; i<tamSoma; i++){
            if(soma[i] != '0')
                printf("%c", soma[i]);
        }
        
        printf("\n");
 
    } while(n1 != 0 && n2 != 0);
 
return 0;
}