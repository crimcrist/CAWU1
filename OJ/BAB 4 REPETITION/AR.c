#include <stdio.h>

int main (){
    int M, N;
    scanf ("%d %d", &N, &M);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
             for (int k = 1; k <= M - j; k++) {
                printf(" ");
            }
            for (int k = 1; k <= j; k++)
            {
                printf ("*");
            }
            printf ("\n");
        }
    } 
}