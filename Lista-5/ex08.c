/* 8. Ordenação por Data (++) */
#include <string.h>
#include <stdlib.h>
 
struct alunos{
    int matricula;
    int dia;
    int mes;
    int ano;
    char nome[200];
};
 
int main(){
    int n, i, j;
    scanf("%d", &n);
 
    struct alunos dados[n];
    struct alunos aux;
 
    for(i=0; i<n; i++){
        scanf("%d", &dados[i].matricula);
        scanf("%d", &dados[i].dia);
        scanf("%d", &dados[i].mes);
        scanf("%d", &dados[i].ano);
        scanf(" %[^\n]", dados[i].nome);
    }
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(dados[i].ano < dados[j].ano){
                aux = dados[i];
                dados[i] = dados[j];
                dados[j] = aux;
            }
            
            else if(dados[i].ano == dados[j].ano){
                if(dados[i].mes < dados[j].mes){
                    aux = dados[i];
                    dados[i] = dados[j];
                    dados[j] = aux;
                }
                
                else if(dados[i].mes == dados[j].mes){
                    if(dados[i].dia < dados[j].dia){
                        aux = dados[i];
                        dados[i] = dados[j];
                        dados[j] = aux;
                    }
                }
            }
        }
    }
    
    for(i=0; i<n; i++){
        printf("Matric.: %d ", dados[i].matricula);
        printf("Nome: %s ", dados[i].nome); 
        printf("Data Nasc: %d/%d/%d\n", dados[i].dia, dados[i].mes, dados[i].ano);
    }
return 0;
}