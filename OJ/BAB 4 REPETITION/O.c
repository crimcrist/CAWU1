#include <stdio.h>

int main (){
    int T, N,K,M;
    int table = 0;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d %d %d", &N, &M, &K);
       
        for (int j = 1; j <= N; j++)
        {
            scanf ("%d", &table);
            if (K <= table && table <= M)
            {
                K = table;
                
            }   
        }
       printf ("Case #%d: %d\n", i, K);
    }
    
}