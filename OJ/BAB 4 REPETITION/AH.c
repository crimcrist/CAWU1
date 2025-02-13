#include <stdio.h>

int main (){
    int T;
    long long int N, count;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%lld", &N);
        count=0;
        while (N>=10)
        {
            N /= 10;
            count++;
        }
        count++;
       printf ("Case #%d: %lld\n", i, count);
    }
}