#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_words(char *line) {
    int count = 0, inWord = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if (isalpha(line[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else if (isspace(line[i])) {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("Error opening file\n");
        return 1;
    }

    int X;
    fscanf(file, "%d", &X);
    fgetc(file);

    char line[51];
    int page = 1, wordCount = 0;
    int pages [10];
    int wordCounts[10];
    int pagesCount = 0;

    while (fgets(line, 51, file)) {
        if (line[0] == '#') {
            if (wordCount < X) {
                pages[pagesCount] = page;
                wordCounts[pagesCount] = wordCount;
                pagesCount++;
            }
            page++;
            wordCount = 0;
        } else {
            wordCount += count_words(line);
        }
    }

    fclose(file);
    if (pagesCount == 0) {
        printf("The essay is correct\n");
    } else {
        for (int i = 0; i < pagesCount; i++) {
            printf("page %d: %d word(s)\n", pages[i], wordCounts[i]);
        }
    }

    return 0;
}
