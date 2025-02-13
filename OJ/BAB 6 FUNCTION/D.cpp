#include <stdio.h>

long long int F(long long int N) {
    if (N == 0) {
        return 0; 
    }

    if (N == 1) {
        return 1;
    }

    if (N % 2 == 0) {
        return F(N / 2);
    }

    return F(N - 1) + F(N + 1);
}

int main() {
    int tc; 
    long long N;
    long long result;

    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        scanf("%lld", &N); 
        result = F(N);
        printf("Case #%d: %lld\n", i + 1, result);
    }
    
    return 0;
}
