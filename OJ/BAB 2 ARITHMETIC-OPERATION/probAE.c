#include <stdio.h>

int main (){
    long long int N;
    long long int base = 0;
    int bonus = 50;
    scanf ("%lld", &N);
    for (int i = 0; i < N; i++)
    {
         base += 100 + i*bonus;
    }
    printf ("%lld\n", base);
}