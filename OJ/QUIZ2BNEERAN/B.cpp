#include <stdio.h>
#include <string.h>

int countWords(char* line) {
    int count = 0;
    int inWord = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Failed to open file.\n");
        return 1;
    }

    int X;
    fscanf(file, "%d\n", &X);

    int page = 1, totalWords = 0;
    int pages[10] = {0};
    char line[51];

    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\n")] = '\0';
        if (strcmp(line, "#") == 0) { 
            if (totalWords < X) {
                pages[page - 1] = totalWords;
            }
            totalWords = 0;
            page++;
        } else {
            totalWords += countWords(line);
        }
    }

    if (totalWords < X && totalWords > 0) {
        pages[page - 1] = totalWords;
    }

    fclose(file);

    int found = 0;
    for (int i = 0; i < page; i++) {
        if (pages[i] > 0) {
            printf("page %d: %d word(s)\n", i + 1, pages[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("The essay is correct\n");
    }

    return 0;
}
