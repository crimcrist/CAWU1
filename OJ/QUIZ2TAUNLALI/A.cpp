#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    char A[300][300], B[300][300];

    for (int i = 0; i < N; i++) {
        scanf("%s %[^\n]", A[i], B[i]);
    }

    char search1[300], search2[300];
    char name1[300] = "", name2[300] = "";

    scanf("%s", search1);
    for (int i = 0; i < N; i++) {
        if (strcmp(A[i], search1) == 0) {
            strcpy(name1, B[i]);
            break;
        }
    }

    scanf("%s", search2);
    for (int i = 0; i < N; i++) {
        if (strcmp(A[i], search2) == 0) {
            strcpy(name2, B[i]);
            break;
        }
    }

    printf("%s is calling %s\n", name1, name2);

    return 0;
}
