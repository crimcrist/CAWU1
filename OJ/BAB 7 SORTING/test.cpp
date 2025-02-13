#include <stdio.h>
#include <stdlib.h>

void swap(long long int *a, long long int *b) {
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long int A[], int low, int high) {
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

void quickSort(long long int A[], int low, int high) {
    if (low < high) {
        int pivot = partition(A, low, high);
        quickSort(A, low, pivot - 1);
        quickSort(A, pivot + 1, high);
    }
}

void GuessTheGuest(long long int sums[]) {
    // Urutkan semua pasangan
    quickSort(sums, 0, 24);
    
    // Ambil pasangan yang diperlukan untuk menemukan M1, M2, M3, M4, M5
    long long int M1_plus_M2 = sums[0];   // M1 + M2
    long long int M1_plus_M3 = sums[1];   // M1 + M3
    long long int M1_plus_M4 = sums[2];   // M1 + M4
    long long int M2_plus_M3 = sums[3];   // M2 + M3
    long long int M2_plus_M4 = sums[4];   // M2 + M4
    long long int M3_plus_M4 = sums[5];   // M3 + M4
    long long int M1_plus_M5 = sums[6];   // M1 + M5
    long long int M2_plus_M5 = sums[7];   // M2 + M5
    long long int M3_plus_M5 = sums[8];   // M3 + M5
    long long int M4_plus_M5 = sums[9];   // M4 + M5
    
    // Sekarang kita hitung M1, M2, M3, M4, M5 menggunakan sistem persamaan
    long long int M1 = (M1_plus_M2 + M1_plus_M3 + M1_plus_M4 - (M2_plus_M3 + M2_plus_M4 + M3_plus_M4)) / 3;
    long long int M2 = M1_plus_M2 - M1;
    long long int M3 = M1_plus_M3 - M1;
    long long int M4 = M1_plus_M4 - M1;
    long long int M5 = M1_plus_M5 - M1;

    // Cetak hasil dalam urutan non-menurun
    long long int result[5] = {M1, M2, M3, M4, M5};
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%lld", result[i]);
    }
    printf("\n");
}

int main() {
    long long int T;
    scanf("%lld", &T);
    
    for (int t = 1; t <= T; t++) {
        long long int sums[25];
        for (int i = 0; i < 25; i++) {
            scanf("%lld", &sums[i]);
        }

        printf("Case #%d: ", t);
        GuessTheGuest(sums);
    }
    return 0;
}
