/* 4. Um_Dois_Três (+) */
#include <stdio.h>
#include <string.h>
 
int main(){
    int n, i, j;
    char num[6], one[] = {"one"}, two[] = {"two"}, three[] = {"three"};
 
    scanf("%d", &n);
 
    for(i=0; i<n; i++){
        scanf(" %[^\n]", num);
        getchar();
 
        int tam = strlen(num), flag1=0, flag2=0;
 
        if(tam == 5)
            printf("3\n");
 
        else if(tam == 3){
            for(j=0; j<tam; j++){
                if(num[j] == one[j])
                    flag1++;
 
                else if(num[j] == two[j])
                    flag2++;
            }
 
            if(flag1 >= 2)
                printf("1\n");
            
            else if(flag2 >= 2)
                printf("2\n");
        }
    }
        
return 0;
}