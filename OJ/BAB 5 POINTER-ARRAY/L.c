#include <stdio.h>

int main (){
    int N;
    scanf ("%d", &N);
    int A[N], B[N];
    for (int i = 0; i < N; i++)
    {
        scanf ("%d", &A[i]);
    }
    for (int i = 0; i < N; i++){
        int c = A[i];
        scanf ("%d", &B[c]);
    }

    for (int i = 0; i < N; i++){
        printf ("%d", B[i]);
        if ( i != N-1){
            printf (" ");
        }
    }
    printf ("\n");
}