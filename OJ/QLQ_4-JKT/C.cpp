#include <stdio.h>

int main (){
    int T,N,M;
    int pesertalose;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d %d", &N, &M);
        int area[N];
        int peserta[M];
        int count = 0;

        for (int j = 0; j < N; j++)
        {
            area [j] = 0;
        }
        
        for (int j = 0; j < M; i++)
        {
            scanf ("%d", &peserta[j]);
            if (area [peserta[j]] == 0)
            {
                area [peserta[j]] = 1;
            } else {
                count++;
            }
        }
        printf ("Case #%d: %d", i, count);
    }
    
}
