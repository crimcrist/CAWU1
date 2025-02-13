#include <stdio.h>

int main (){
    int N;
    long long int animals,total = 0;
    scanf ("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf ("%lld", &animals);
        total += animals;
    }
    printf ("%lld\n", total);
return 0;
}