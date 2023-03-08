/* 1. Combinador (+) */
#include <stdio.h>
#include <string.h>
#define N 50

int main(){
    int n, i, j;
    char str1[N], str2[N];

    scanf("%d", &n);
    while(n--){
        scanf(" %[^ ]", str1);
        getchar();
        
        scanf(" %[^\n]", str2);
        getchar();

        int tam1 = strlen(str1);
        int tam2 = strlen(str2);

        i=0; j=0;
        while(i < tam1+tam2){
            if(i < tam1)
                printf("%c", str1[i]);
            
            if(i < tam2)
                printf("%c", str2[i]);
                
            i++;
        }
        printf("\n");
    }

return 0;
}