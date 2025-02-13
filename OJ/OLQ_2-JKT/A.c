#include <stdio.h>

int main (){
    long long int A, B;
    long long int total = 0;
    scanf ("%lld %lld", &A, &B);
    for (int i = A; i <= B; i++){
        total += i;}
    printf ("%lld\n",total);
    return 0;
}