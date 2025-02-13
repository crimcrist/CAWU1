#include <stdio.h>

int main (){
    int T, N;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {    
    int total = 1;
    scanf ("%d",&N);
    printf ("Case %d:", i);
    for (int j = 0; j < N; j++)
    {
        total += j;
        printf (" %d", total);
    }
    printf ("\n");
    }
return 0;
}