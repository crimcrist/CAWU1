#include <stdio.h>


long long int binarySearch(long long int target) {
    long long int low = 1;
    long long int high = 1500000; 

    while (low < high) {
        long long int mid = low + (high - low) / 2;
        long long int sum = mid * (mid + 1) * (2 * mid + 1) / 6;
        if (sum >= target)
            high = mid;
        else
            low = mid + 1;
    }
    return high;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++) {
        long long int M;
        scanf("%lld", &M);
        printf("Case #%d: %lld\n", t, binarySearch(M));
    }
}