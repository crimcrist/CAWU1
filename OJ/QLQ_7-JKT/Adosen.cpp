#include <stdio.h>
#define MOD 1000000000


int oke = 0;

long long count(int M, int N) {
    oke++;
    if (M == 1) return N; 
    return M + (N - 1) + (N - 1) * count (M - 1, N - 1) % MOD;
}

int main() {
    int t;
    scanf ("%d", &t);
    for (int i = 0; i < t; i++){
    int N, M;
    scanf("%d %d", &M, &N);
    printf ("Case #%d: %lld\n",i+1, count(M, N));
    printf ("%d\n",oke);
    }
   return 0;
}
