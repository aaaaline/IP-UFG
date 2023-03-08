/* 16. Ordem (+++) */
#include <stdio.h>

int main(){
    int a, b, c;
    char x, y, z;
 
    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%c %c %c", &x, &y, &z);
 
    if((x == 'A') && (y == 'B') && (z == 'C')){
 
        if(a < b && b < c)
            printf("%d %d %d", a, b, c);
 
        else if(a < c && c < b)
            printf("%d %d %d", a, c, b);
 
        else if(b < a && a < c)
            printf("%d %d %d", b, a, c);
 
        else if(b < c && c < a)
            printf("%d %d %d", b, c, a);
 
        else if(c < a && a < b)
            printf("%d %d %d", c, a, b);
 
        else if(c < b && b < a)
            printf("%d %d %d", c, b, a);
    }
 
    else if((x == 'A') && (y == 'C') && (z == 'B')){
 
        if(a < b && b < c)
            printf("%d %d %d", a, c, b);
 
        else if(a < c && c < b)
            printf("%d %d %d", a, b, c);
 
        else if(b < a && a < c)
            printf("%d %d %d", b, c, a);
 
        else if(b < c && c < a)
            printf("%d %d %d", b, a, c);
 
        else if(c < a && a < b)
            printf("%d %d %d", c, b, a);
 
        else if(c < b && b < a)
            printf("%d %d %d", c, a, b);
    }
 
    else if((x == 'B') && (y == 'A') && (z == 'C')){
 
        if(a < b && b < c)
            printf("%d %d %d", b, a, c);
 
        else if(a < c && c < b)
            printf("%d %d %d", c, a, b);
 
        else if(b < a && a < c)
            printf("%d %d %d", a, b, c);
 
        else if(b < c && c < a)
            printf("%d %d %d", c, b, a);
 
        else if(c < a && a < b)
            printf("%d %d %d", a, c, b);
 
        else if(c < b && b < a)
            printf("%d %d %d", b, c, a);
    }
 
    else if((x == 'B') && (y == 'C') && (z == 'A')){
 
        if(a < b && b < c)
            printf("%d %d %d", b, c, a);
        
        else if(a < c && c < b)
            printf("%d %d %d", c, b, a);
 
        else if(b < a && a < c)
            printf("%d %d %d", a, c, b);
 
        else if(b < c && c < a)
            printf("%d %d %d", c, a, b);
 
        else if(c < a && a < b)
            printf("%d %d %d", a, b, c);
 
        else if(c < b && b < a)
            printf("%d %d %d", b, a, c);
    }
 
    else if((x == 'C') && (y == 'A') && (z == 'B')){
 
        if(a < b && b < c)
            printf("%d %d %d", c, a, b);
 
        else if(a < c && c < b)
            printf("%d %d %d", b, a, c);
 
        else if(b < a && a < c)
            printf("%d %d %d", c, b, a);
 
        else if(b < c && c < a)
            printf("%d %d %d", a, b, c);
 
        else if(c < a && a < b)
            printf("%d %d %d", b, c, a);
 
        else if(c < b && b < a)
            printf("%d %d %d", a, c, b);
    }
 
    else if((x == 'C') && (y == 'B') && (z == 'A')){
 
        if(a < b && b < c)
            printf("%d %d %d", c, b, a);
 
        else if(a < c && c < b)
            printf("%d %d %d", b, c, a);
 
        else if(b < a && a < c)
            printf("%d %d %d", c, a, b);
 
        else if(b < c && c < a)
            printf("%d %d %d", a, c, b);
 
        else if(c < a && a < b)
            printf("%d %d %d", b, a, c);
 
        else if(c < b && b < a)
            printf("%d %d %d", a, b, c);
    }
    
return 0;
}