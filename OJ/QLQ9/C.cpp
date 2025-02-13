#include <stdio.h>
#include <string.h>

struct urgent {
    char nama[105];
    int prioritas;
};

void swap(struct urgent *a, struct urgent *b) {
    struct urgent temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct urgent dat[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (dat[j].prioritas > dat[high].prioritas) {
            i++;
            swap(&dat[i], &dat[j]);
        }
        else if (dat[j].prioritas == dat[high].prioritas) {
            if (strcmp(dat[j].nama, dat[high].nama) < 0) {
                swap(&dat[j], &dat[i + 1]);
                i++;
            }
        }
    }
    swap(&dat[i + 1], &dat[high]);
    return i + 1;
}

void quickSort(struct urgent dat[], int low, int high) {
    if (low < high) {
        int pivot = partition(dat, low, high);
        quickSort(dat, low, pivot - 1);
        quickSort(dat, pivot + 1, high);
    }
}

int main() {
    int N;
    scanf("%d", &N); 
    struct urgent dat[10005]; 

    for (int i = 0; i < N; i++) {
        scanf("%s %d", dat[i].nama, &dat[i].prioritas);
    }

    quickSort(dat, 0, N - 1);
    for (int i = 0; i < N; i++) {
        printf("%s %d\n", dat[i].nama, dat[i].prioritas);
    }

    return 0;
}
