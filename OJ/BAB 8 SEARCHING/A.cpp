#include <stdio.h>
#include <string.h>

void search(char kataPendek[][55], char kataAsli[][55], char ubah[], int T) {
    for (int i = 0; i < T; i++) {
        if (strcmp(kataPendek[i], ubah) == 0) {
            printf("%s", kataAsli[i]);
            return;
        }
    }
    printf("%s", ubah);
    return;
}

int main() {
    FILE *file = fopen("testdata.in", "r");

    int T;
    fscanf(file, "%d\n", &T);
    char kataPendek[105][55], kataAsli[105][55];

    for (int i = 0; i < T; i++) {
        fscanf(file, "%[^#]#%s\n", kataPendek[i], kataAsli[i]);
    }

    int tc;
    fscanf(file, "%d\n", &tc);

    for (int i = 0; i < tc; i++) {
        char kalimat[105];
        fscanf(file, "%[^\n]\n", kalimat);
        
        int l = strlen(kalimat);
        char temp[105];
        int index = 0;

        printf("Case #%d:\n", i+1);
        for (int j = 0; j <= l; j++) {
            if (kalimat[j] == ' ' || kalimat[j] == '\0') {
                temp[index] = '\0';
                search(kataPendek, kataAsli, temp, T);

                if (kalimat[j] == ' ') printf(" ");
                else printf("\n");
                index = 0;
            }
            else {
                temp[index] = kalimat[j];
                index++;
            }
        }
    }
    return 0;
}