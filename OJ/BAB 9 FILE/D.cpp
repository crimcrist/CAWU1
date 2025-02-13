#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");

    int T;
    fscanf(file, "%d\n", &T);
    for (int i = 0; i < T; i++) {
        char nama[105];
        fgets(nama, sizeof(nama), file); 
        nama[strcspn(nama, "\n")] = 0; 

        int l = strlen(nama);
        char flag[26] = {0}; 
        int N;
        fscanf(file, "%d\n", &N);
        for (int j = 0; j < N; j++) {
            char A, B;
            fscanf(file, " %c %c\n", &A, &B); 

            for (int k = 0; k < l; k++) {
                if (nama[k] == A && flag[A - 'A'] == 0) {
                    nama[k] = B;
                }
            }
            flag[A - 'A'] = 1; 
        }
        

        int flag2[26] = {0};
        for (int k = 0; k < l; k++) {
            if (nama[k] >= 'A' && nama[k] <= 'Z') {
                flag2[nama[k] - 'A']++;
            }
        }


        for (int k = 0; k < 26; k++) {
            if (flag2[k] > 0) {
                printf("%c %d\n", k + 'A', flag2[k]);
            }
        }
    }

    fclose(file);
    return 0;
}
