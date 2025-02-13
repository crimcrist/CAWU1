#include <stdio.h>

int main (){
    int n, m;
    int i,j,k,l;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf ("%d", &m);
        for (j = 1; j <= m; j++)
        {
            for (k = 1; k <= m - j; k++)
            {
                printf (" ");
            }
            for (l = 1; l <= (2*j) - 1; l++)
            {
                if (l == 1 || l == (2*j) - 1|| l == 0)
                {
                    printf ("*");
                }else {
                    printf (" ");
                }
                
               
            }
        printf ("\n");
        } 
    }
}