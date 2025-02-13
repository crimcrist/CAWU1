#include <stdio.h>

int main (){
    long long int T, N,M, P;
    long long int pesertalose;
    scanf ("%lld", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%lld %lld", &N, &M);
        int area[N];
        int peserta[M];
        int count = 0;
        
        for (int j = 1; j <= N; j++) {
            area[j] = 0;
        }

        for (int j = 1; j <= M; j++) {
            scanf("%lld", &peserta[j]);   
            if (area[peserta[j]] == 0) {
                area[peserta[j]] = 1;
            } else {
                count++;
            }
        }
        printf("Case #%d: %d\n", i, count);
    }        
}