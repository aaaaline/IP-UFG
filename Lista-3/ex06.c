/* 6. Palíndromo (++) */
#include <stdio.h>
#include <string.h>
#define N 200
 
int main(){
    char str[N];
    int i, j, k;
 
    while(scanf("%[^\n]", str) != EOF){
        getchar();
 
        int tam = strlen(str);
        char strInvert[tam+1];
 
        j = tam-1; i = 0;
        
        for(i=0; i<tam, j>=0; i++, j--)
            strInvert[i] = str[j];
 
        int flag=0;
        for(k=0; k<tam; k++){
            if(strInvert[k] == str[k])
                flag++;
        }
        
        if(flag == tam)
            printf("sim\n");
            
        else
            printf("nao\n");
    }
    
return 0;
}