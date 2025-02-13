#include <stdio.h>

int main (){
    long long int N, A;
    long long int total = 0;
    scanf ("%lld", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf ("%lld", &A);
        if (A > 0){
        total += A;}
        else {
        total += 0;
        }
    }
    printf ("%lld\n", total);
}