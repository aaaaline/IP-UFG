/* 5. Cursos (+) */
#include <stdio.h>
#include <string.h>
 
struct tabela{
    int cod;
    double valor;
    char nome[100];
}; 
 
struct registro{
    char nome[500];
    int cod;
    int cursando;
};
 
int main(){
    int c, i, a, j;
    double mensalidade=0;
    scanf("%d", &c);
 
    struct tabela cursos[c]; 
 
    for(i=0; i<c; i++){
        scanf("%d", &cursos[i].cod);
        getchar();
        scanf("%lf", &cursos[i].valor);
        scanf(" %[^\n]", cursos[i].nome);
        getchar();
    }
 
    scanf("%d", &a);
 
    struct registro alunos[a];
 
    for(i=0; i<a; i++){
        scanf(" %[^\n]", alunos[i].nome);
        getchar();
        scanf("%d", &alunos[i].cod);
        getchar();
        scanf("%d", &alunos[i].cursando);
        getchar();
    }
    
    for(i=0; i<a; i++){
        for(j=0; j<c; j++){
            if(alunos[i].cod == cursos[j].cod){
                mensalidade = alunos[i].cursando*cursos[j].valor;
                printf("Aluno(a): %s ", alunos[i].nome); 
                printf("Curso: %s ", cursos[j].nome);
                printf("Num. Creditos: %d ", alunos[i].cursando);
                printf("Valor Credito: %.2lf ", cursos[j].valor);
                printf("Mensalidade: %.2lf\n", mensalidade);
            }
        }
        mensalidade = 0;
    }
 
return 0;
}