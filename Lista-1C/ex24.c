/* 24. Sequência ordenada (+++) */
#include <stdio.h>
 
int main(){
    int seq, i=0;
    double n, ant=0, k=0, j=0;
 
    scanf("%d", &seq);
 
    while(seq != 0){
        while(i < seq){
            scanf("%lf", &n);
 
            if(n > ant)
                k++;
 
            else if(n < ant)
                j++;
 
            i++;
            ant = n;
        }
 
        if(k == seq)
            printf("ORDENADA\n");
 
        else if(j > 0)
            printf("DESORDENADA\n");
 
        k = 0; j = 0; ant = 0; i = 0;
        scanf("%d", &seq);
    }
 
return 0;
}