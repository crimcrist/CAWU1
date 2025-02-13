#include <stdio.h>
#include <string.h>

typedef struct {
    char R[11];
    char M[21];
} Data;

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");
    int N;
    fscanf(file, "%d", &N); fgetc(file);

    Data arr[1005];  

    for (int i = 0; i < N; i++) {
        fscanf(file, "%s %s", arr[i].R, arr[i].M); fgetc(file);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            long long int t1 = 0, t2 = 0;
            sscanf(arr[j].R, "%lld", &t1);
            sscanf(arr[j + 1].R, "%lld", &t2);
            if (t1 > t2) {
                Data temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s %s\n", arr[i].R, arr[i].M);
    }

    fclose(file);
    return 0;
}
