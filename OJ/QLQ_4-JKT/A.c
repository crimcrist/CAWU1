#include <stdio.h>

int main (){
    long long int T, N;
    scanf ("%lld", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%lld", &N);
        printf ("Case #%d: ", i);
        if (N%11 == 0)
        {
            printf ("Yeah\n");
        } else {
            printf ("Nah\n");
        }   
    }
return 0;
}