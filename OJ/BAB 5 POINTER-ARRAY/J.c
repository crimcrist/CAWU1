#include <stdio.h>
#include <string.h>

int main (){
    int T;
    char S [10000];
    scanf ("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf ("%s", S);
        int Num = strlen(S);
        printf ("Case %d: ", i+1);
        for (int j = 0; j < Num; j++)
        {
            if (j ==  Num -1) {
                printf ("%d\n", S[j]);
            } else {
                printf ("%d-", S[j]);
            }
        }
    }
}