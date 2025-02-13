#include <stdio.h>

int main (){
    int T,N;
    scanf ("%d", &T);
    for (int tc = 0; tc < T; tc++)
    {
        scanf ("%d",&N);
        int X[N];
        for (int i = 0; i < N; i++)
        {
           scanf ("%d", &X[i]);
        }
        printf ("Case #%d: ", tc+1);
        for (int j = N-1; j >= 0; j--)
        {
            if (j == 0){
                printf ("%d\n", X[j]);
            } else {
                printf ("%d ", X[j]);
            }
            }
        }
    }