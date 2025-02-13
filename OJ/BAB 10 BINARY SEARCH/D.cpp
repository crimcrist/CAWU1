#include <stdio.h>

int findSum(int arr[], int length, unsigned long long max) {
    int maxLength = 0;
    unsigned long long currentSum = 0;
    int start = 0;

    for (int end = 0; end < length; end++) {
        currentSum += arr[end];
        while (currentSum > max && start <= end) {
            currentSum -= arr[start];
            start++;
        }

        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int N;
        unsigned long long M;
        scanf("%d %llu", &N, &M);
        int numbers[10000];
        for (int i = 0; i < N; i++) {
            scanf("%d", &numbers[i]);
        }

        int maxLen = findSum(numbers, N, M);
        if (maxLen == 0) maxLen = -1;

        printf("Case #%d: %d\n", tc, maxLen);
    }
}
