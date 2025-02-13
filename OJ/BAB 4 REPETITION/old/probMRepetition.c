#include<stdio.h>

int main (){
    int T,N;
    scanf ("%d",&T);
    for (int i = 1; i <= T ; i++)
    {
        scanf ("%d",&N);
        printf ("Case #%d:\n",i);
        for (int j = 1; j <= N ; j++)
        {
            for (int k = 1; k <= N ; k++)
            {
                if (k<=N-j)
                printf (" ");
                else if ((j+k)%2 == 0)
                printf ("*");
                else 
                printf ("#");
            }
            printf ("\n");
        }
    }
}