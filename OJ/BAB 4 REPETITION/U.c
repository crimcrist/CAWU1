#include <stdio.h>

int main (){
    int T, N;
    int S;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d", &N);
        char T [N + 1];
        scanf ("%s", &T);
            int lili = 0;
            int bibi = 0;
            for (int j = 0; j < N; j++)
            {
                if (T[j] == 'L'){
                lili++;
                } else if (T[j] =='B')
                {
                bibi++;
                }
            }
            if (lili > bibi)
            {
                printf ("Lili\n");
            } else if (bibi > lili)
            {
            printf ("Bibi\n");
            } else {
            printf ("None\n");
            }  
    }   
}