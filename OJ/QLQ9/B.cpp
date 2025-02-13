#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int compare_atoz(const char* a, const char* b) {
    return strcmp(a, b); 
}

int compare_ztoa(const char* a, const char* b) {
    return strcmp(b, a);  
}

int partition(char words[][100], int low, int high, int (*compare)(const char*, const char*)) {
    char pivot[100];
    strcpy(pivot, words[high]); 
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (compare(words[j], pivot) < 0) {
            i++;
            swap(words[i], words[j]);
        }
    }
    swap(words[i + 1], words[high]);
    return i + 1;
}

void quickSort(char words[][100], int low, int high, int (*compare)(const char*, const char*)) {
    if (low < high) {
        int pivot = partition(words, low, high, compare); 
        quickSort(words, low, pivot - 1, compare);
        quickSort(words, pivot + 1, high, compare); 
    }
}

int main() {
    int N, X;
    scanf("%d", &N);
    char words[N][100];
    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
    }
    
    scanf("%d", &X);

    int (*compare)(const char*, const char*);
    if (X == 0) {
        compare = compare_atoz;
    } else {
        compare = compare_ztoa; 
    }

    quickSort(words, 0, N - 1, compare);
    for (int i = 0; i < N; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
