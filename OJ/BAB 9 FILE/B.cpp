#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");

    int N;
    fscanf(file, "%d", &N); fgetc(file);
    for (int tc = 0; tc < N; tc++) {
        int K;
        fscanf(file, "%d", &K); fgetc(file);
        char S[100];
        fscanf(file, "%[^\n]", S);fgetc (file);

        int l = strlen(S);
        for (int i = 0; i < l; i++) {
            switch (S[i]) {
                case '0': S[i] = 'O'; break;
                case '1': S[i] = 'I'; break;
                case '3': S[i] = 'E'; break;
                case '4': S[i] = 'A'; break;
                case '5': S[i] = 'S'; break;
                case '6': S[i] = 'G'; break;
                case '7': S[i] = 'T'; break;
                case '8': S[i] = 'B'; break;
            }
        }
            if (K > 26) {
                K = K % 26;
            }

            for (int i = 0; i < l; i++) {
                if (S[i] != ' ') {
                    if (S[i] - K < 'A') {
                        S[i] += 26 - K;
                    } else S[i] -= K;
                }
            }
        printf("Case #%d: %s\n", tc + 1, S);
    }
    return 0;
}
