#include <stdio.h>

int main(){
    long long int T,N;
    scanf ("%lld",&T);
    for (int tc = 0; tc < T; tc++)
    {
        scanf ("%lld", &N); 
        long long int A[N][N];  
        long long int total [N];

        for (int j = 0; j < N; j++){
            total[j]= 0;
        }

        for (int j = 0; j < N; j++){
            for (int k = 0; k < N; k++){
                scanf ("%lld", &A[j][k]);
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
                printf ("%lld\n", total[j]);
            } else {
                printf ("%lld ", total[j]);
            }
        }
    }
}