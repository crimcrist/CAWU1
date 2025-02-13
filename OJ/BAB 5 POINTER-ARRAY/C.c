#include <stdio.h>

int main (){
    int N,Q;
    scanf ("%d", &N);
    int C[N],B,A;
    for (int i = 0; i < N; i++)
    {
        scanf ("%d", &C[i]);
    }

    scanf ("%d", &Q);
    for (int i = 0; i < Q; i++)
        {
            scanf ("%d %d", &A, &B);
            C [A-1] = B;
            printf ("Case #%d: ",i+1);
        for (int i = 0; i < N; i++)
        { 
            if (i ==  N-1){
                printf ("%d\n", C [i]);
            } else {
                printf ("%d ", C [i]);
            }
        }
        }
    }