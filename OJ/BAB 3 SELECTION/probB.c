#include <stdio.h>

int main (){
    long long int T,K,N,M;
    scanf ("%lld", &T);
    for (int i = 1; i <= T; i++)
    {
       scanf ("%lld %lld %lld",&K,&N,&M);
    if (K > (N+M)){
        printf ("Case #%d: no\n", i);
    }
    else {
        printf ("Case #%d: yes\n", i);
    }
    }
    return 0;
}