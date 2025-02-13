#include <stdio.h>

int main (){
    int N;
    int tc,tv,ts;
    int M = 0;
    scanf ("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf ("%d %d %d", &tc, &tv, &ts);
        if (tv > ts){
            M++;
        }
    }  
    printf ("%d\n", M);
}