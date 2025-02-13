#include <stdio.h>

int main (){
    long long int T,N,X;
    long long int temps,selisih,hasil;
    scanf ("%lld", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%lld", &N);
        scanf ("%lld", &temps);
        hasil = 100000000000000000;
        for (int j = 1; j <= N - 1; j++)
        {
            scanf ("%lld", &X);
            if (X < temps){
            selisih = temps - X;
            }
            else{
            selisih = X - temps;
            }
            temps = X;
        if (selisih < hasil)
        {
            hasil = selisih;
        }
        }
        printf ("Case #%d: %lld\n", i, hasil);
    }
}