#include <stdio.h>
#include <string.h>

int main (){
    int N,Q;
    scanf ("%d", &N);
    for (int tc = 1; tc <= N; tc++){
    char C[1005];
    char B, A;
    scanf ("%s", C);
    int num = strlen(C);
    scanf ("%d", &Q);
    for (int i = 0; i < Q; i++){
        scanf (" %c %c", &A, &B);
        // C[A-1] = B;
    for (int j = 0; j < num; j++)
    {
       if (C[j] == A){
        C[j] = B;
       }
    }
    }
    printf ("Case #%d: ",tc);
    printf ("%s\n", C);
}
}