#include <stdio.h>
#include <string.h>

struct tugas {
    char nama[100];
    int nilai;
};

void swap(struct tugas *a, struct tugas *b) {
    struct tugas temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct tugas dat[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (dat[j].nilai > dat[high].nilai) {
            i++;
            swap(&dat[i], &dat[j]);
        }
        else if (dat[j].nilai == dat[high].nilai) {
            if (strcmp(dat[j].nama, dat[high].nama) < 0) {
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
    int tc;
    scanf("%d", &tc);
    getchar(); 
    for (int t = 0; t < tc; t++) {
        int N;
        scanf("%d", &N);
        getchar(); 
        struct tugas dat[100]; 
        for (int i = 0; i < N; i++) {
            scanf("%[^#]#%d", dat[i].nama, &dat[i].nilai);
            getchar(); 
        }

        quickSort(dat, 0, N - 1);
        printf ("Case #%d:\n", t+1);
        for (int i = 0; i < N; i++) {
            printf("%s - %d\n", dat[i].nama, dat[i].nilai);
        }
    }

    return 0;
}
