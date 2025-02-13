#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");

    int N;
    fscanf(file, "%d", &N);
    
    char tanah[N + 1]; 
    fscanf(file, "%s", tanah); 
    
    int maxLength = 0;
    int countLength = 0; 
    for (int i = 0; i < N; i++) {
        if (tanah[i] == '1') {
            countLength++; 
        } else {
            if (countLength > maxLength) {
                maxLength = countLength; 
            }
            countLength = 0; 
        }
    }

    if (countLength > maxLength) {
        maxLength = countLength;
    }

    printf("%d\n", maxLength); 
    fclose(file);
    return 0;
}
