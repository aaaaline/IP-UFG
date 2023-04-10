/* 9. Matriz xadrez numerada (++) */
#include <stdio.h>
 
int main(){
    int m, n;
 
    scanf("%d %d", &m, &n);
 
    int matriz[m][n], i, j, k=1;
 
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(i == 0 || i%2 == 0){
                if(j == 0 || j%2 == 0)
                    printf("0 ");
                else{
                    printf("%d ", k);
                    k++;
                }
            }
 
            else{
                if(j == 0 || j%2 == 0){
                    printf("%d ", k);
                    k++;
                }
                else
                    printf("0 ");
            }
        }
        printf("\n");
    }
 
return 0;
}