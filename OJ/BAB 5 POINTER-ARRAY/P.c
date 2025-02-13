#include <stdio.h>

int main (){
    int N;
    scanf ("%d", &N);
    int A[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf ("%d", &A[i][j]);
        }
    }

    int jumlah[N + 1];
    for (int k = 0; k <= N; k++) {
        jumlah[k] = 0;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (A[i][j] > 0){
                jumlah[A[i][j]]++;
            }
        }
    }

    int count = 0;
    for (int k = 1; k <= N; k++){
        if (jumlah[k] < N){
            count++;
        }
    }

    printf ("%d\n", count);
    return 0;
}