#include <stdio.h>

int main (){
    int T;
    scanf ("%d", &T);
    for (int tc = 0; tc < T; tc++){
        int N;
        scanf ("%d", &N);
        int A[10005];
        for (int i = 0; i < N; i++){
        scanf ("%d", &A[i]);
        }
        int P, Q;
        scanf ("%d %d", &P, &N);
        printf ("Case #%d : ", tc + 1);
        if (A[P-1] < A[N-1]){
            printf ("Lili\n");
        } else if (A[P-1] == A[N-1]){
            printf ("Draw\n");
        } else if (A[P-1] > A[N-1]){
            printf ("Bibi\n");
        }
    }
}