#include <stdio.h>

int main (){
    int T,A,B;
    int total;
    scanf ("%d", &T);
    for (int i = 1; i <= T ; i++)
    {
        total = 0;
        scanf ("%d %d", &A, &B);
        total = A;
        while (A >= B){
            A = (A-B) + 1;
            total++;
        }
        printf ("Case #%d: %d\n", i, total);
    }
return 0;
}