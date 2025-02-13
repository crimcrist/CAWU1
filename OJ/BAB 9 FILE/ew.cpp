#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");

    int T;
    fscanf(file, "%d\n", &T);

    for (int tc = 0; tc < T; tc++) {
        int N;
        fscanf(file, "%d\n", &N);

        int sisi[105];
        int total = 0;
        // int maxSisi = 0;
        for (int i = 0; i < N; i++) {
            fscanf(file, "%d", &sisi[i]);
            total += sisi[i];
             // if (sisi[i] > maxSisi){
            //     maxSisi = sisi[i];
            // }
        }

        int luas = total * 4;

        int minmax = N * 4;
        int upto = 0;
        int left = 2 * sisi[0];
        int right = 2 * sisi[N - 1];

        if (N != 1) {
            for (int i = 0; i < N - 1; i++) {
                int temp = sisi[i] - sisi[i+1];
                if (temp < 0) temp *= -1;
                upto += temp * 2;
            }
        }
        upto += left + right;
        int keliling = minmax + upto;

        printf("Case #%d: %d %d\n", tc + 1, keliling, luas);
    }
    return 0;
}