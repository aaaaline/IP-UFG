/* 18. José (+++) */
#include <stdio.h>
 
int main(){
    int t, A, B, i;
    int c1, d1, u1, c2, d2, u2;
    
    scanf("%d", &t);
    
    for(i=0; i<t; i++){
        scanf("%d %d", &A, &B);
        
        c1 = A/100; d1 = A/10%10; u1 = A%10;
        c2 = B/100; d2 = B/10%10; u2 = B%10;
        
        if(u1 > u2)
            printf("%d\n", u1*100+d1*10+c1);
            
        else if(u2 > u1)
            printf("%d\n", u2*100+d2*10+c2);
            
        else if(u1 == u2){
            if(d1 > d2)
                printf("%d\n", u1*100+d1*10+c1);
            
            else if(d2 > d1)
                printf("%d\n", u2*100+d2*10+c2);
                
            else if(d1 == d2){
                if(u1 > u2)
                    printf("%d\n", u1*100+d1*10+c1);
                    
                else if(u2 > u1)
                    printf("%d\n", u2*100+d2*10+c2);
            }
        }
    }
return 0;
}