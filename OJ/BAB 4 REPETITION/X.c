#include <stdio.h>

int main (){
    long long int Q;
    long long int total = 1;
    scanf ("%lld", &Q);
    if (Q == 0)
    {
        printf ("1\n");
    } else {
        for (int i = 1; i <= Q; i++){
        total =  total*2 + 1;
        }
        printf ("%lld\n", total);
    }
}