#include <stdio.h>

int main (){
    int N,M;
    int X, Y;
    int bibiterbesar = 0, nagaterbesar = 0;
    scanf ("%d %d", &N, &M);
    for (int i = 1; i <= N; i++)
    {
       scanf ("%d",&X);
            if (i == 1){
                bibiterbesar = X;
            }
            else if (X > bibiterbesar)
            {
                 bibiterbesar = X;
            }
    }

    for (int j = 1; j <= M; j++)
    {
        scanf ("%d",&Y);
            if (j == 1){
                nagaterbesar = Y;
            }
            else if (Y > nagaterbesar)
            {
                nagaterbesar = Y;
            }
    }
    
    if (bibiterbesar > nagaterbesar)
    {
       printf ("The dark secret was true\n");
    } else if (nagaterbesar >= bibiterbesar)
    {
        printf ("Secret debunked\n");
    }
    return 0;
}