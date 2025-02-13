#include <stdio.h>

int findSum(int arr[], int length, unsigned long long max) {
    int maxLength = 0, retLength = 0;
    int start = 0;
    unsigned long long currentSum = 0;

    for (int end = 0; end < length; end++) {
        currentSum += arr[end];
        
        while (currentSum > max) {
            currentSum -= arr[start++];
            retLength--;
        }
        
        retLength = end - start + 1;
        if (retLength > maxLength) maxLength = retLength;
    }

    return maxLength == 0 ? -1 : maxLength;
}

int main() {
    int N, T;
    scanf("%d", &N);
    
    int numbers[5005];
    for (int i = 0; i < N; i++) 
        scanf("%d", &numbers[i]);

    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        unsigned long long M;
        scanf("%llu", &M);

        int maxLen = findSum(numbers, N, M);
        printf("Case #%d: %d\n", tc, maxLen);
    }
    
    return 0;
}
