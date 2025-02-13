#include <stdio.h>

int main (){
    int N;
    scanf ("%d", &N);
    int A[N + 1][N + 1];
    int baris[N + 1][N + 1];
    int kolom[N + 1][N + 1];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf ("%d",&A[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= N; j++) {
            baris[i][j] = 0;
            kolom[i][j] = 0; 
        }
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            int num = A[i][j];
            if (baris[i][num] || kolom[j][num]) {
                printf("Nay\n");
                return 0;
            }
            baris[i][num] = 1;
            kolom[j][num] = 1;
        }
    }
    printf("Yay\n");
    return 0;
}