#include <stdio.h>

int binarySearch(long long arr[], int l, int h, long long target) {
    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (target >= arr[h]) return h + 1; 
        if (target < arr[l]) return -1;   
        if (h - l == 1) return l + 1;   
        if (target == arr[mid]) return mid + 1; 

        if (target < arr[mid]) h = mid;
        else if (target > arr[mid]) l = mid;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    long long A[N], sumA[N];
    long long sum = 0;

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
        sum += A[i];
        sumA[i] = sum;
    }

    int Q;
    scanf("%d", &Q);

    for (int t = 1; t <= Q; t++) {
        long long M;
        scanf("%lld", &M);
        int result = binarySearch(sumA, 0, N - 1, M);

        if (result != -1) {
            printf("Case #%d: %d\n", t, result);  
        } else {
            printf("Case #%d: -1\n", t);
        }
    }

    return 0;
}
