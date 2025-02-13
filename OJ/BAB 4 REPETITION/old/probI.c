#include <stdio.h>

int main (){
    long long int N, animals,total = 0;
    scanf ("%lld",&N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%lld",&animals);
        total += animals; 
    }
    printf ("%lld\n",total);
    return 0;
    
}