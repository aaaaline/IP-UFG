/* 9. Descrição de inteiros (++) */
#include <stdio.h>
 
int main(){
    int n, a, b, c, d, A, B, C;
    scanf("%d", &n);
 
    if(n < 0 || n == 0 || n > 9999)
        printf("Numero invalido!");
 
    else if((n > 1000) && (n < 10000)){
        a = n/1000;
        b = n/100%10;
        c = n/10%10;
        d = n%10;
 
        A = (n/1000)*1000;
        B = (n/100%10)*100;
        C = (n/10%10)*10;
 
        if(A > 1000 && B > 100 && C > 10 && d > 1)
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d", n, a, b, c, d, A, B, C, d);
 
        else if(A == 1000 && B > 100 && C > 10 && d > 1 )
            printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d", n, a, b, c, d, A, B, C, d);
 
        else if(A == 1000 && B == 100 && C == 10 && d == 1)
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena + %d unidade = %d + %d + %d + %d", n, a, b, c, d, A, B, C, d);
 
        else if(A > 1000 && B > 100 && C > 10 && d == 0)
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas + %d dezenas = %d + %d + %d", n, a, b, c, A, B, C);
 
        else if(A > 1000 && B > 100 && C == 10 && d == 0)
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezenas = %d + %d + %d", n, a, b, c, A, B, C);
 
        else if(A > 1000 && B == 100 && C == 10 && d == 0)
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena + %d dezena = %d + %d + %d", n, a, b, c, A, B, C);
 
        else if(A == 1000 && B == 100 && C == 10 && d == 0)
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena + %d dezena = %d + %d + %d", n, a, b, c, A, B, C);
 
        else if(A > 1000 && B > 100 && c == 0 && d == 0)
            printf("(quarta ordem) %d = %d unidades de milhar + %d centenas = %d + %d", n, a, b, A, B);
 
        else if(A > 1000 && B == 100 && c == 0 && d == 0)
            printf("(quarta ordem) %d = %d unidades de milhar + %d centena = %d + %d", n, a, b, A, B);
 
        else if(A == 1000 && B == 100 && c == 0 && d == 0)
            printf("(quarta ordem) %d = %d unidade de milhar + %d centena = %d + %d", n, a, b, A, B);
    }
 
    if(n == 1000){
        a = n/1000;
 
        printf("(quarta ordem) %d = %d unidade de milhar", n, a);
        }
 
    if(n > 100 && n < 1000){
        a = n/100;
        b = n/10%10;
        c = n%10;
 
        A = (n/100)*100;
        B = (n/10%10)*10;
 
    if(A == 100 && B == 10 && c==1)
            printf("(terceira ordem) %d = %d centena + %d dezena + %d unidade = %d + %d + %d", n, a, b, c, A, B, c);
 
    else if(A == 100 && B > 10 && c == 1)
            printf("(terceira ordem) %d = %d centena + %d dezenas + %d unidade = %d + %d + %d", n, a, b, c, A, B, c);
 
    else if(A == 100 && B == 10 && c > 1)
            printf("(terceira ordem) %d = %d centena + %d dezena + %d unidades = %d + %d + %d", n, a, b, c, A, B, c);
 
    else if(A > 100 && B > 10 && c > 1)
            printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d", n, a, b, c, A, B, c);
 
    else if(A > 100 && b == 0 && c > 1)
            printf("(terceira ordem) %d = %d centenas + %d unidades = %d + %d", n, a, c, A, c);
 
    else if(A > 100 && b == 0 && c == 1)
            printf("(terceira ordem) %d = %d centenas + %d unidade = %d + %d", n, a, c, A, c);
 
    else if(A > 100 && B == 10 && c == 0)
            printf("(terceira ordem) %d = %d centena + %d dezena = %d + %d", n, a, b, A, B);
 
    else if(A > 100 && B > 10 && c == 0)
            printf("(terceira ordem) %d = %d centena + %d dezenas = %d + %d", n, a, b, A, B);
    }
 
    if(n == 100){
        a = n/100;
 
        printf("(terceira ordem) %d = %d centena", n, a);
        }
 
    if(n > 10 && n < 100){
 
        a = n/10;
        b = n%10;
 
        A = (n/10)*10;
 
        if(a == 1 && b == 1)
            printf("(segunda ordem) %d = %d dezena + %d unidade = %d + %d", n, a, b, A, b);
 
        else if(a == 1 && b > 1)
            printf("(segunda ordem) %d = %d dezena + %d unidades = %d + %d", n, a, b, A, b);
 
        else if(a > 1 && b == 1)
            printf("(segunda ordem) %d = %d dezenas + %d unidade = %d + %d", n, a, b, A, b);
    }
 
    if(n == 10){
        a = n/10;
 
        printf("(segunda ordem) %d = %d dezena", n, a);
    }
 
    if(n > 0 && n < 10){
        if(n == 1)
            printf("(primeira ordem) %d = %d unidade", n, n);
 
        else if(n > 1)
            printf("(primeira ordem) %d = %d unidades", n, n);
    }
 
return 0;    
}