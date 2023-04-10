/* 1. Frações Equivalentes (+) */
#include <stdio.h>
 
struct fracao{
    int num;
    int den;
};
 
short int Equivalente (struct fracao *x, struct fracao* y){
    if(x->num*y->den==x->den*y->num){
        return(1);
    }
    return(0);
}
 
int main(){
    struct fracao vet[50];
    int n, m, i, j, caso=1;
 
    scanf("%d", &n);
 
    while(n--){
        scanf("%d", &m);
 
        for(i=0; i<m; i++){
            scanf("%d/%d", &vet[i].num, &vet[i].den);   
        }
 
        short int houveEquivalente=0;
        printf("Caso de teste %d\n", caso++);
 
        for(i=0; i<m-1; i++){
            for(j=i+1; j<m; j++){
                if(Equivalente(&vet[i], &vet[j])){
                    printf("%d/%d equivalente a %d/%d\n", vet[i].num, vet[i].den, vet[j].num, vet[j].den);
                    houveEquivalente=1;
                }
            }
        }
        
        if(houveEquivalente==0){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
    }
 
return 0;    
}