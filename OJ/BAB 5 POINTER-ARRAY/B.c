#include <stdio.h>

int main(){
    int T,N;
    scanf ("%d",&T);
    for (int tc = 0; tc < T; tc++)
    {
        scanf ("%d", &N); 
        int A[N], B[N];
        for (int j = 0; j < N; j++)
        {
           scanf ("%d", &A[j]);
        }

        for (int j = 0; j < N; j++)
        {
           scanf ("%d", &B[j]);
        }
        printf ("Case #%d: ",tc+1);
        for (int j = 0; j < N; j++)
        {
            if (j ==  N-1){
                printf ("%d\n", A[j] - B[j]);
            } else {
                printf ("%d ", A[j] - B[j]);
            }
        }
    }
    
}