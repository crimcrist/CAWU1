#include <stdio.h>
#define MOD 1000000000

long long count(int M, int N) {
    if (M == 1) return N;  // Base case: if height is 1, return N branches

    // Recursive case: branches at current level plus branches from lower levels
    long long total = (N + N * count(M - 1, N)) % MOD;
    return total;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int N, M;
        scanf("%d %d", &M, &N);
        printf("Case #%d: %lld\n", i + 1, count(M, N));
    }
    return 0;
}
