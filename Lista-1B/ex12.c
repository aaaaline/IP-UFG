#include <stdio.h>
 
int main(){
    int data, dd, mm, aaaa;
    scanf("%d", &data);
 
    if(data < 10000000 && data < 99999999){
        dd = data/1000000;
        mm = data/10000%100;
        aaaa = data%10000;
    }
 
    if(data > 1000000){
        dd = data/1000000;
        mm = data/10000%100;
        aaaa = data%10000;
    }
 
    if(mm < 1 || mm > 12)
        printf("Data invalida!");
 
    else{
        switch(mm){
            case 1:
                if(dd < 1 || dd > 31)
                    printf("Data invalida!");
                            
                else
                    printf("%d de janeiro de %d", dd, aaaa);
            break;
 
            case 2:
                if(dd < 1 || dd > 28)
                    printf("Data invalida!");
                            
                else
                    printf("%d de fevereiro de %d", dd, aaaa);
            break;
 
            case 3:
                if(dd < 1 || dd > 31)
                    printf("Data invalida!");
                            
                else
                    printf("%d de marco de %d", dd, aaaa);
            break;
 
            case 4:
                if(dd < 1 || dd > 30)
                    printf("Data invalida!");
 
                else
                    printf("%d de abril de %d", dd, aaaa);
            break;
 
            case 5:
                if(dd < 1 || dd > 31)
                    printf("Data invalida!");
                            
                else
                    printf("%d de maio de %d", dd, aaaa);
            break;
 
            case 6:
                if(dd < 1 || dd > 30)
                    printf("Data invalida!");
                            
                else
                    printf("%d de junho de %d", dd, aaaa);
            break;
 
            case 7:
                if(dd < 1 || dd > 31)
                    printf("Data invalida!");
                        
                else
                    printf("%d de julho de %d", dd, aaaa);
            break;
 
            case 8:
                if(dd < 1 || dd > 31)
                    printf("Data invalida!");
                        
                else
                    printf("%d de agosto de %d", dd, aaaa);
            break;
 
            case 9:
                if(dd < 1 || dd > 30)
                    printf("Data invalida!");
 
                else
                    printf("%d de setembro de %d", dd, aaaa);
            break;
 
            case 10:
                if(dd < 1 || dd > 31)
                    printf("Data invalida!");
                        
                else
                    printf("%d de outubro de %d", dd, aaaa);
            break;
 
            case 11:
                if(dd < 1 || dd > 30)
                    printf("Data invalida!");
                
                else
                    printf("%d de novembro de %d", dd, aaaa);
            break;
                    
            case 12:
                if(dd < 1 || dd > 31)
                    printf("Data invalida!");
                
                else
                    printf("%d de dezembro de %d", dd, aaaa);         
        }
    }
 
return 0;
}