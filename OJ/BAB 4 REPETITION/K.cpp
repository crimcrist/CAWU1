#include <stdio.h>

int main (){
    int T, N;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d", &N);
        printf ("Case #%d:\n", i);
        int k,j,l;
        for (k = 1; k <= N; k++)
        { 
            for (l = 1; l <= N - k; l++)
            {
                printf (" ");
            }
            for (j = 1; j <= k; j++){
                if ((j+k+l)%2 == 0)
                {
                    printf ("#");
                } else {
                    printf ("*");
                }  
            }
            printf ("\n");
        }
        
        
    }
}