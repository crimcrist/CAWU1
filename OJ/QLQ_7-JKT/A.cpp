#include <stdio.h>
#define MOD 1000000000

long long count(int M, int N) {
    if (M == 1) return N; 
    long long total = 0;
    long long sum = N;
    for (int i = M; i >= 0; i--){
        total = (total + sum) % MOD;
        sum = (sum * N) % MOD;
    }

    return total;
}

int main() {
    int t;
    scanf ("%d", &t);
    for (int i = 0; i < t; i++){
    int N, M;
    scanf("%d %d", &M, &N);
    printf ("Case #%d: %lld\n",i+1, count(M, N));
    }
   return 0;
}
