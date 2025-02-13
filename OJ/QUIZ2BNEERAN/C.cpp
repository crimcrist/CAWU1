#include <stdio.h>
#include <string.h>

void swap(char arr[][51], int i, int j) {
    char temp[51];
    strcpy(temp, arr[i]);
    strcpy(arr[i], arr[j]);
    strcpy(arr[j], temp);
}

int partition(char arr[][51], int low, int high) {
    char pivot[51];
    strcpy(pivot, arr[high]);
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (strcmp(arr[j], pivot) < 0) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return i + 1;
}

void quicksort(char arr[][51], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        quicksort(arr, low, pivot_index - 1);
        quicksort(arr, pivot_index + 1, high);
    }
}

int main() {
    int N, Y;
    char words[10001][51], Z[51];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
    }

    quicksort(words, 0, N - 1);
    scanf("%d", &Y);
    scanf("%s", Z);
   
    int found = 0, page = 0;
    for (int i = 0; i < N; i++) {
        if (strcmp(words[i], Z) == 0) {
            found = 1;
            page = (i / Y) + 1;
            break;
        }
    }

    if (found) {
        printf("Found at %d\n", page);
    } else {
        printf("Not Found\n");
    }

    return 0;
}
