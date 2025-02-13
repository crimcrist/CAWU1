#include <stdio.h>

int main (){
    int T,N;
    long long int A;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d", &N);
            long long int total = 0;
        for (int j = 1; j <= N; j++)
        {
            scanf ("%lld",&A);
            total += A;
        }
        printf ("Case #%d: %lld\n", i, total);
    }
    
}