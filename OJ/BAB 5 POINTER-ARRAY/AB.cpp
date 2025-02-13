#include <stdio.h>

int main (){
    int tc, N;
    scanf ("%d", &tc);
    for (int t = 0; t < tc; t++){
        scanf ("%d", &N);
        int matrixA [N+1][N+1], matrixB[N+1][N+1], matrixC[N+1][N+1];

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                scanf ("%d", &matrixA[i][j]);
            }
        }
       
        for (int k = 0; k < N; k++){
            for (int l = 0; l < N; l++){
                scanf ("%d", &matrixB[k][l]);
            }
        }
        
        for (int m = 0; m < N; m++){
            for (int n = 0; n < N; n++){
                scanf ("%d", &matrixC[m][n]);
            }
        }

        int total[105][105];

        for (int i = 0; i < N; i++){
           for (int j = 0; j < N; j++){
            total [i][j] = 0;
            for (int k = 0; k < N; k++){
                total[i][j] += matrixA[i][k]*matrixB[k][j];
            }
           }  
        }
        
        int total2[105][105];
        for (int i = 0; i < N; i++){
           for (int j = 0; j < N; j++){
            total2 [i][j] = 0;
            for (int k = 0; k < N; k++){
                total2[i][j] += total[i][k]* matrixC[k][j];
            }
           }  
        }
        printf ("Case #%d:\n", t+1);
        for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (j > 0){
            printf (" ");
            } 
            printf ("%d", total2[i][j]); 
        }
        printf ("\n");
       }
    }
}