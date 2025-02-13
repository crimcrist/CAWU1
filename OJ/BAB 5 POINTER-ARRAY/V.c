#include <stdio.h>

int main (){
    long long int T;
    scanf ("%lld", &T);
    for (int i = 0; i < T; i++)
    {
        long long int N;
        scanf("%lld", &N);
        if (N == 1) {
            printf("Case #%d: 0\n", i + 1);
            continue;
        } else if (N == 2) {
            printf("Case #%d: 1\n", i + 1);
            continue;
        }

        long long int N_2 = 0;
        long long int N_1 = 1;
        long long int like;


        for (int i = 3; i <= N; i++) {
            like = N_1 + N_2;
            N_2 = N_1;
            N_1 = like;
        }

        printf("Case #%d: %lld\n", i + 1, like);
    }
}