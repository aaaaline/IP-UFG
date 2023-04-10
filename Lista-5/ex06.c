/* 6. Strings Econômicas (+) */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TM 1000
 
int main(){
    int n, i=0;
    char *vet[TM];
    char buffer[TM];
    scanf("%d", &n);
 
    while(i < n){
        scanf(" %[^\n]", buffer);
        getchar();
        
        int tamNome = strlen(buffer);
        
        vet[i] = (char*) malloc(tamNome+1);
        
        if(vet[i] == 0){
            printf("Nao ha memoria para executar o programa\n");
            exit(1);
        }else{
            strcpy(vet[i], buffer);
                
            printf("%s", vet[i]);
            printf("\n");
        
            free(vet[i]);
        }
        
        i++;
    }
 
return 0;
}