/* 8. Procura Caractere (++) */
#include <stdio.h>
#include <string.h>
 
int pesquisa(char c, char *string){
    int i;
 
    for(i=0; string[i] != '\0'; i++){
        if(c == string[i])
            return(i);
    }
 
    return(-1);
}
 
int main(){
    int testes, k, pos;
    char frase[500], c;
 
    scanf("%d", &testes);
    getchar();
 
    for(k=0; k<testes; k++){
        scanf("%c", &c);
        getchar();
 
        scanf(" %[^\n]", frase);
        getchar();
 
        pos = pesquisa(c, frase);
 
        if(pos == -1)
            printf("Caractere %c nao encontrado.\n", c);
 
        else
            printf("Caractere %c encontrado no indice %d da string.\n", c, pos);
    }
 
return 0;   
}