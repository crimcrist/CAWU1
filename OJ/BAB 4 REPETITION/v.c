#include <stdio.h>

int main(){
    int T, N;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d", &N);
        if (N % 2 == 0){
        return 0;
        }
        else {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= N; k++)
            {
               if ( j == 1 || j == N ||k == 1 || k == N || j == N - k + 1 || j == k )
               {
                printf ("*");
               } else {
                printf (" ");
               }   
            } 
        printf ("\n");
        }
        }
    printf ("\n");
    }
}