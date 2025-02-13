#include <stdio.h>

int main() {
    FILE *file = fopen("testdata.in", "r");

    long long int N;
    fscanf(file, "%lld\n", &N);
    if (N < 3) {
        printf("NO\n");
        fclose(file);
        return 0;
    }

    long long int panjang[N];
    for (int i = 0; i < N; i++) {
        fscanf(file, "%lld\n", &panjang[i]);
    }
    fclose(file);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (panjang[j] > panjang[j + 1]) {
                long long int temp = panjang[j];
                panjang[j] = panjang[j + 1];
                panjang[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N - 2; i++) {
        if (panjang[i] + panjang[i + 1] > panjang[i + 2]) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
