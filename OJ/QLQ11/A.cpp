#include <stdio.h>
#include <string.h>

#define MAX_GUESTS 1000
#define MAX_NAME_LENGTH 101

int main() {
    FILE *file = fopen("testdata.in", "r");  
    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }

    int T, N;
    char RSVP[MAX_GUESTS][MAX_NAME_LENGTH];
    char guest[MAX_NAME_LENGTH];

    fscanf(file, "%d", &T);
    for (int i = 0; i < T; i++) {
        fscanf(file, "%s", RSVP[i]);  
    }

    fscanf(file, "%d", &N);
    for (int j = 0; j < N; j++) {
        fscanf(file, "%s", guest);  
        int found = -1;
        for (int i = 0; i < T; i++) {
            if (strcmp(RSVP[i], guest) == 0) {
                found = i;
                break;
            }
        }
        printf("%d\n", found); 
    }

    fclose(file);  
    return 0;
}
