#include <stdio.h>

int main (){
    int T, A,B,C,D,E,F;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);
        printf ("Case #%d: ", i);
        for (int j = 0; j < A; j++)
        {
            printf ("a");
        } 
        for (int k = 0; k < B; k++)
        {
            printf ("s");
        } 
        for (int l = 0; l < C; l++)
        {
            printf ("h");
        } 
        for (int m = 0; m < D; m++)
        {
            printf ("i");
        }
        for (int n = 0; n < E; n++)
        {
            printf ("a");
        }
        for (int o = 0; o < F; o++)
        {
            printf ("p");
        }
    printf ("\n");
    }
return 0;
}