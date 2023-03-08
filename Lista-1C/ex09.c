/* 9. Fatorial (++) */
#include <stdio.h>
 
int main(){
    int n, i=1, fat=1;
 
    scanf("%d", &n);
 
    for(i=n; i>0; i--){
        fat *= i;  
    }
 
    printf("%d! = %d", n, fat);
 
return 0;
}