/* 21. Turismo (+++) */
#include <stdio.h>
 
int main(){
    int dist[6][6], i, n; 
    
    dist[0][0] = 0; 
    dist[0][1] = 63; 
    dist[0][2] = 210;
    dist[0][3] = 190; 
    dist[0][4] = (char)'-'; 
    dist[0][5] = 190;
    dist[1][0] = 63; dist[1][1] = 0;
    dist[1][2] = 160;
    dist[1][3] = 150;
    dist[1][4] = 95;
    dist[1][5] = 10;
    dist[2][0] = 210;
    dist[2][1] = 160;
    dist[2][2] = 0;
    dist[2][3] = 10;
    dist[2][4] = 1;
    dist[2][5] = 10;
    dist[3][0] = 190;
    dist[3][1] = 150;
    dist[3][2] = 10;
    dist[3][3] = 0;
    dist[3][4] = 10;
    dist[3][5] = 20;
    dist[4][0] = 10;
    dist[4][1] = 95;
    dist[4][2] = 7;
    dist[4][3] = 21;
    dist[4][4] = 0;
    dist[4][5] = 80;
    dist[5][0] = 190;
    dist[5][1] = 2;
    dist[5][2] = (char)'-';
    dist[5][3] = 41;
    dist[5][4] = 80;
    dist[5][5] = 0;
    
    scanf("%d", &n);
    
    int rota[n], soma=0;
    for(i=0; i<n; i++)
        scanf("%d", &rota[i]);
        
    for(i=0; i<n-1; i++){
        if((char)dist[rota[i]][rota[i+1]] == '-'){
            printf("rota invalida!\n");
            return 0;
        }
        
        soma += dist[rota[i]][rota[i+1]];
    }
 
    printf("%d\n", soma);
 
return 0;
}