#include <stdio.h>

int main (){
    long long int T,N,M;
    scanf ("%lld", &T);
    for (int tc = 0; tc < T; tc++)
    {
        scanf ("%lld %lld",&N, &M);
        long long total;
        long long totalchoccolate = 0;
        for (int i = 0; i < N; i++)
        {
            long long total = 0; 
            for (int j = 0; j < M; j++)
            {
                long long int weight;
                scanf ("%lld", &weight);
                if (weight > total)
                {
                    total = weight;
                }  
            }
         totalchoccolate += total;
        }
        printf ("Case #%d: ", tc + 1);
        printf ("%lld\n", totalchoccolate);
    }
}