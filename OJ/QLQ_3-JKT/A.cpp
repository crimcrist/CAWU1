#include <stdio.h>

int main (){
    int N;
    int B, A;
    int output;
    scanf ("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf ("%d %d", &A, &B);
        output = ((A/B) << B);
        printf ("%d\n", output);
    }
return 0;
}