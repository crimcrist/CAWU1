#include <stdio.h>

int main (){
    long long int N;
    long long int A = 0,B = 0;
    scanf ("%lld", &N);
    A = N/2 ;
    B = (A + 1);
    printf ("%lld = %lld + %lld\n", N, A, B);
    return 0;
}