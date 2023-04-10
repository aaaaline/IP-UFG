/* 19. Potência de Matrizes (+++) */
#include <stdio.h>
 
void copia(double X[10][10], double Y[10][10],int N);
void multiplica(double X[10][10], double Y[10][10], double Z[10][10],int N);
void imprime(double X[10][10], int N);
 
int main(){
    int N, i, j, k, expoente;
    double A[10][10], A1[10][10], A2[10][10];
    
    scanf("%d", &N);
    scanf("%d", &expoente);
    
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%lf", &A[i][j]);
        }
    }
 
    copia(A1, A, N);
    
    for(k=0; k<expoente-1; k++){
        multiplica(A, A1, A2, N); 
        copia(A1, A2, N);
    }
 
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%.3lf ", A2[i][j]);
        }
        printf("\n");
    }
 
return 0;
}
 
void copia(double X[10][10], double Y[10][10],int N){
    int i,j;
     for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            X[i][j]=Y[i][j];
        }    
     }
}
 
void multiplica(double X[10][10], double Y[10][10], double Z[10][10],int N){
    int i,j,k;
    for (i=0;i<N;i++){
        for(j=0;j<N;j++){
            Z[i][j]=0.0;
            for(k=0;k<N;k++){
                Z[i][j]+=X[i][k]*Y[k][j];
            }
        }
    }
}
void imprime(double X[10][10], int N){
    int i,j;
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
          printf("%.2lf ",X[i][j]);
      }    
      printf("\n");
    }
}