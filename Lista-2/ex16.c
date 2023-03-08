/* 16. Aula Cancelada (+++) */
#include <stdio.h>
#define N 1000
 
int main(){
    int numAlunos, minPres;
 
    scanf("%d %d", &numAlunos, &minPres);
 
    int vet[numAlunos], i, pres=0;
 
    for(i=0; i<numAlunos; i++){
        scanf("%d", &vet[i]);
 
        if(vet[i] <= 0)
            pres++;
    }
 
    if(pres >= minPres){
        printf("NAO\n");
 
        for(i=numAlunos-1; i>=0; i--){
            if(vet[i] <= 0)
                printf("%d\n", i+1);
        }
    }
 
    else
        printf("SIM\n");
    
return 0;
}