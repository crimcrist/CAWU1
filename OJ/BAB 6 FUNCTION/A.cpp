#include <stdio.h>

int count = 0;

long long F(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    if (n % 3 == 0) {
        count++;
    }

    if (n % 5 == 0) {
        return n * 2;
    }

    return F(n - 1) + n + F(n - 2) + (n - 2);
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        count = 0;
        long long result = F(N);
        printf("Case #%d: %lld %d\n", t, result, count);
    }
    return 0;
}
