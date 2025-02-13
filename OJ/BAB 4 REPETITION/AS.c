#include <stdio.h>

int main (){
    int T, N;
    scanf ("%d", &T);
    for (int tc = 1; tc <= T ; tc++)
    {
        scanf ("%d",&N);
        getchar ();
        char S[105];
        char K[105];
        int count = 0, nilai = 0; 
        for (int i = 0; i < N; i++)
        {
            scanf ("%c", &S[i]); 
        } 
        getchar();
        for (int i = 0; i < N; i++)
        {
            scanf ("%c", &K[i]); 
        }

        for (int i = 0; i < N; i++)
        {
        if (S[i] == K[i])
        // printf("test %d ", i);
        // printf("%c ", S[i]);
        // printf("%c \n", K[i]);
            {
                count++;
            } 
           // printf ("%d", count);
        }
        nilai = (count*100)/ N;

        printf ("Case #%d: ", tc);
        printf ("%d\n", nilai);      
    }
}