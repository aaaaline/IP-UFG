/* 2. Mercado (+) */
#include <stdio.h>
#include <string.h>
 
struct produtos{
    char nome[50];
    double preco;
}feira;
 
struct prod{
    char nome[50];
    int qtd;
}comprados;
 
int main(){
    int idas, n1, n2;
    int i, j, flag, k;
    double soma;
 
    scanf("%d", &idas);
    while(idas--){
        scanf("%d", &n1);
 
        struct produtos feira[n1];
 
        for(i=0; i<n1; i++){
            scanf("%s", feira[i].nome);
            getchar();
            scanf("%lf", &feira[i].preco);
        }
 
        scanf("%d", &n2);
 
        struct prod comprados[n2];
 
        for(i=0; i<n2; i++){
            scanf("%s", comprados[i].nome);
            getchar();
            scanf("%d", &comprados[i].qtd);
        }
 
        soma=0;
 
        for(i=0; i<n2; i++){
            for(j=0; j<n1; j++){
                flag=0;
                for(k=0; comprados[i].nome[k] != '\0' || feira[j].nome[k] != '\0'; k++){
                    if(comprados[i].nome[k] == feira[j].nome[k])
                        flag++;
 
                    if(flag == strlen(comprados[i].nome) && flag == strlen(feira[j].nome)){
                        soma += comprados[i].qtd*feira[j].preco;
                        flag=0;
                    }
                }
            }
        }
 
        printf("R$ %.2lf\n", soma);
    }
 
return 0;
}