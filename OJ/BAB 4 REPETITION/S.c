#include <stdio.h>

int main (){
    long long int N, P;
    long long int bi;
    long long int boom = 0;
    scanf ("%lld %lld", &N, &P);
    for (int i = 1; i <= N; i++)
    {
        scanf ("%lld",&bi);
        if(bi < P)
        {
            boom++;
        }
    }
    printf ("%lld\n",boom);
}