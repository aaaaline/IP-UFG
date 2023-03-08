/* 21. Mínimo múltiplo comum (+++) */
#include <stdio.h>
 
int main(){
    int n1, n2, n3, d, mmc=1;
 
    scanf("%d %d %d", &n1, &n2, &n3);
 
    while(n1 > 1 || n2 > 1 || n3 > 1){
        d = 2;

        while((n1%d != 0) && (n2%d!= 0)&& (n3%d != 0)){
            d++;
        }
 
        printf("%d %d %d :", n1, n2, n3);
        printf("%d\n", d);
 
        mmc = mmc*d;
 
        if(n1%d == 0)
            n1 = n1/d;
 
        if(n2%d == 0)
            n2 = n2/d;
 
        if((n3%d) == 0)
            n3 = n3/d;
    }
 
    printf("MMC: %d\n",mmc);
 
return 0;
}