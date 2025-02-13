#include <stdio.h>

int main (){
    long long int T, N, M, I;
    long long int interest = 0;
    long long int credit = 0;
    scanf ("%lld", &T);
    int i, j;
    for (i = 0; i < T; i++)
    {
       scanf ("%lld %lld %lld", &M, &I, &N);
       printf ("Case #%d:\n", i+1);
       interest = 0; 
       for (j = 0; j < N; j++){
       credit = M;
       int pembilang = M * I * 80;
       int penyebut = 100 * 12 * 100;
       interest = pembilang / penyebut;
       credit = M + interest;
       printf ("%d %lld\n", j+1, credit);
       M += interest;
       }
    }
}
