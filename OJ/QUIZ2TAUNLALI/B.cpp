#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int maxSeats;
    scanf("%d", &maxSeats);

    int N;
    scanf("%d", &N);
    int groupSizes[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &groupSizes[i]);
    }

    quicksort(groupSizes, 0, N - 1);

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (groupSizes[i] == 0){
            continue;
        }else if (maxSeats >= groupSizes[i]) {
            maxSeats -= groupSizes[i];
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
