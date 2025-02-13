#include <stdio.h>
#include <string.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    char A[205][205];
    for (int i = 0; i < R; i++) {
        char string[205];
        scanf("%s", string); 

        for (int j = 0; j < C - 1; j++) {
            for (int k = 0; k < C - j - 1; k++) {
                if (string[k] > string[k + 1]) {
                    char temp = string[k];
                    string[k] = string[k + 1];
                    string[k + 1] = temp;
                }
            }
        }
        strcpy(A[i], string);
    }

    for (int i = 0; i < R - 1; i++) {
        for (int j = 0; j < R - i - 1; j++) {
            if (strcmp(A[j], A[j + 1]) > 0) {
                char tempString[205];
                strcpy(tempString, A[j]);
                strcpy(A[j], A[j + 1]);
                strcpy(A[j + 1], tempString);
            }
        }
    }
    for (int i = R - 1; i >= 0; i--) {
        printf("%s\n", A[i]); 
    }

    return 0;
}
