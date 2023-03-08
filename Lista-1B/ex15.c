#include <stdio.h>
 
int main(){
    int n, a, b, c, d, e;
    scanf("%d", &n);
 
    if(n > 99999)
        printf("NUMERO INVALIDO");
    
    else{
        if(n > 9 && n < 100){
            a = n/10;
            b = n%10;
 
            if(a == b)
                printf("PALINDROMO");
            
            else
                printf("NAO PALINDROMO");
        }
 
        else if(n > 99 && n < 1000){
            a = n/100;
            b = n/10%10;
            c = n%10;
 
            if(a == c)
                printf("PALINDROMO");
 
            else
                printf("NAO PALINDROMO");
        }
        
        else if(n > 999 && n < 10000){
            a = n/1000;
            b = n/100%10;
            c = n/10%10%10;
            d = n%10;
 
            if(a == d && b == c)
                printf("PALINDROMO");
 
            else
                printf("NAO PALINDROMO");
        }
 
        else if(n > 9999 && n < 100000){
            a = n/10000;
            b = n/1000%10;
            c = n/100%10%10;
            d = n/10%10;
            e = n%10;
 
            if(a == e && b == d)
                printf("PALINDROMO");
 
            else
                printf("NAO PALINDROMO");
        }
    }
return 0;
}