#include <stdio.h>

int main(){
    int T,N;
    scanf ("%d",&T);
    for (int tc = 0; tc < T; tc++)
    {
        scanf ("%d", &N); 
        int A[N][N];  
        int total [N];

        for (int j = 0; j < N; j++){
            total[j]= 0;
        }

        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){
                scanf ("%d", &A[j][k]);
            }
         }

        printf ("Case #%d: ",tc+1);
        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){
                total[k] += A[j][k];
            }
        }

        for (int j = 0; j < N; j++)
        {
            if (j ==  N-1) {
                printf ("%d\n", total[j]);
            } else {
                printf ("%d ", total[j]);
            }
        }
    }
}