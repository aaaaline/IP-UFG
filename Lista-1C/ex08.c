/* 8. Ultrapassagem populacional (+) */
#include <stdio.h>
#include <math.h>
 
int main(){
    int popA, popB, anos=0;
 
    scanf("%d %d", &popA, &popB);
 
    while(popA < popB){
        popA += popA*0.03;
        popB += popB*0.015; 
 
        anos++;
    }
 
    printf("ANOS = %d", anos);
 
return 0;
}