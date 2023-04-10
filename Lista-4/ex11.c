/* 11. Cadê o Wally? (+++) */
#include <stdio.h>
 
int main(){
    int n, m;
    
    scanf("%d %d", &m, &n);
    
    int mat[m][n], i, j, flag=0, lin, col;
    
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(mat[i][j] == 4 && mat[i+1][j] == 1111){
                flag++;
                lin = i+1; col = j;
            }
        }
    }
    
    if(flag > 0)
        printf("%d %d", lin, col);
    else
        printf("WALLY NAO ESTA NA MATRIZ");
            
return 0;
}