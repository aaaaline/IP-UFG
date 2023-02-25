/* 3. Divisível por 5 e por 3 (+) */
#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
 
    if(n%3 == 0 && n%5 == 0)
        printf("O NUMERO E DIVISIVEL\n");
    
    else
        printf("O NUMERO NAO E DIVISIVEL\n");
    
return 0;
}