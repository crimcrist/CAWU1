#include <stdio.h>

int main (){
    long long int a, b;
    scanf ("%lld %lld", &a, &b);
    printf ("%lld\n", (b*(b+1)/2) - ((a-1)*a/2));
    return 0;
}