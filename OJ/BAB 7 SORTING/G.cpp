#include <stdio.h>

int main (){
    int tc;
    scanf ("%d", &tc);
    for (int t = 0; t < tc; t++){
        int N, X;
        scanf ("%d %d", &N, &X);
        int A [N + 5];
        for (int i = 0; i < N; i++){
            scanf ("%d", &A[i]);
        }
        int count = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N - 1; j++){
                if (A[j] > A[j+1]){
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                    count++;
                }
            }
        }
        printf ("Case #%d: %d\n", t+1, count*X);
    } 
}