#include <stdio.h>

int main (){
    long long int N = 1;
    int teams;
    scanf("%d",&teams);
    for (int i = 0; i < teams ; i++)
    {
        N = N*2; 
    }
    printf ("%lld\n", N-1);
    return 0;
} 