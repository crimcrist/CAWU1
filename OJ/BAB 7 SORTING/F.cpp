#include <stdio.h>
#include <string.h>

struct tugas {
    char matkul[100];
    int urutan;
};
void swap(struct tugas *a, struct tugas *b) {
    struct tugas temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct tugas dat[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (dat[j].urutan < dat[high].urutan) {
            i++;
            swap(&dat[i], &dat[j]);
        }
        else if (dat[j].urutan == dat[high].urutan) {
            if (strcmp(dat[j].matkul, dat[high].matkul) < 0) {
                swap(&dat[j], &dat[i + 1]);
                i++;
            }
        }
    }
    swap(&dat[i + 1], &dat[high]);
    return i + 1;
}

void quickSort(struct tugas dat[], int low, int high) {
    if (low < high) {
        int pivot = partition(dat, low, high);
        quickSort(dat, low, pivot - 1);
        quickSort(dat, pivot + 1, high);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    struct tugas dat[105]; 

    for (int i = 0; i < N; i++) {
        scanf("%s %d", dat[i].matkul, &dat[i].urutan);
    }

    quickSort(dat, 0, N - 1);
    
    for (int i = 0; i < N; i++) {
        printf("%s\n", dat[i].matkul);
    }

    return 0;
}
