/* 7. Turma de Introdução à Programação (+) */
#include <stdio.h>
 
int main(){
    
    int mat;
    int horas;
    double notaFinal, mediaProva, mediaListas, notaTrabalho, p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5;
    
    while(p1!=-1||p2!=-1||p3!=-1||p4!=-1||p5!=-1||p6!=-1||p7!=-1||p8!=-1||l1!=-1||l2!=-1||l3!=-1||l4!=-1||l5!=-1||mat!=-1||horas!=-1){
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &mat, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &notaTrabalho, &horas);
        
        mediaProva = (p1+p2+p3+p4+p5+p6+p7+p8)/8;
        mediaListas = (l1+l2+l3+l4+l5)/5;
        notaFinal = 0.7*mediaProva+0.15*mediaListas+0.15*notaTrabalho;
        
        if(notaFinal >= 6.0 && horas >= 96)
            printf ("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, notaFinal);
 
        else if(horas < 96 && notaFinal < 6.0 && horas!=-1)
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", mat, notaFinal);
 
        else if(horas < 96 && horas != -1) 
            printf ("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", mat, notaFinal);
 
        else if(notaFinal < 6.0 && notaFinal != -1) 
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mat, notaFinal);
    }
 
return 0;
}