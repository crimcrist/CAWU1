#include <stdio.h>

long long int abs(long long int x) {
    if (x < 0) return -x;
    return x;
}

void swap(long long int *a, long long int *b) {
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long int arr[], int low, int high) {
    long long int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high; j++) {  
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(long long int arr[], int low, int high) {
    if (low < high) {  
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    long long int A[N + 5];  
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);  
    }
    
    quicksort(A, 0, N - 1);

    long long int max = -10000005;
    long long int diff[N + 5] = {0};
    for (int i = 0; i < N - 1; i++) {
        diff[i] = abs(A[i] - A[i + 1]);
        if (diff[i] > max) max = diff[i];
    }

    int flag = 0;
    for (int i = 0; i < N - 1; i++) {
        if (diff[i] == max) {
            if (flag) printf(" ");
            printf("%lld %lld", A[i], A[i + 1]); 
            flag = 1;
        }
    }
    printf("\n");

    return 0;
}
