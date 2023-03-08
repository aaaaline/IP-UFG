/* 19. Hipotenusas inteiras (+++) */
#include <stdio.h>
#include <math.h>
 
int main(){
    unsigned int n, hip=1, cat1=1, cat2=1;
 
    scanf("%u", &n);
 
    while(hip <= n){
        while(cat1 <= n){
            while(cat2 <= n){
                if(pow(cat1,2) + pow(cat2,2) == pow(hip,2)){
                    if(cat1 < cat2)
                    printf("hipotenusa = %d, catetos %d e %d\n", hip, cat1, cat2);
                }
                cat2++;
            }
            cat1++; cat2 = 1;
        }
        hip++; cat1 = 1; cat2 = 1;
    }
 
return 0;
}