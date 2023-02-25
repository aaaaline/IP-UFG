/* 6. Tempo em segundos (+) */
#include <stdio.h>
 
int main(){
    int h, min, seg, total=0;
 
    scanf("%d %d %d", &h, &min, &seg);
 
    total = 3600*h + 60*min + seg;
 
    printf("O TEMPO EM SEGUNDOS E = %d\n", total);
 
return 0;
}