#include <stdio.h>

int main (){
    int T,N;
    long long int barang;
    long long int total = 0;
    scanf ("%d",&T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d",&N);getchar();
        for (int j = 1 ; j <= N; j++)
        {
            scanf ("%lld",&barang);getchar();
            total += barang;
        }
         printf ("Case #%d: %.0lld\n",i,total);;
         total = 0;
    }
return 0;
}