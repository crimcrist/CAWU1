#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (A[j] <= A[high]) {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return i + 1;
}

void quickSort(int A[], int low, int high) {
    if (low < high) {
        int pivot = partition(A, low, high);
        quickSort(A, low, pivot - 1);
        quickSort(A, pivot + 1, high);
    }
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++) {
        int N;
        scanf("%d", &N);

        int A[N + 5];
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[j]);
        }

        quickSort(A, 0, N - 1);
        
        int diff = 0;
        for (int i = 0; i < N - 1; i++) {
                if (i == N / 2 - 1) continue;
                if (A[i + 1] - A[i] > diff){
                    diff = A[i + 1] - A[i];
                }
        }

        printf("Case #%d: %d\n", t, diff);
    }
    return 0;
}
