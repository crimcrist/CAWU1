#include <stdio.h>
#include <string.h>

struct topviewer {
    char videoTitle[1000];
    char artisName[1000]; 
    int view;
};

void swap(struct topviewer *a, struct topviewer *b) {
    struct topviewer temp = *a;
    *a = *b;
    *b = temp;
}

int change(struct topviewer dat[], int low, int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (dat[j].view > dat[high].view) {
            i++;
            swap(&dat[i], &dat[j]);
        }
    }
    swap(&dat[i + 1], &dat[high]);
    return i + 1;
}

void quickSort(struct topviewer dat[], int low, int high) {
    if (low >= high) return;
    int pivotIndex = change(dat, low, high);
    quickSort(dat, low, pivotIndex - 1); 
    quickSort(dat, pivotIndex + 1, high);
}

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");
    if (file == NULL) { 
        perror("Failed to open file");
        return 1;
    }

    struct topviewer dat[105]; 
    int counter = 0;
    
    while (!feof(file)) {
        fscanf(file, "%[^#]#%[^#]#%d\n", dat[counter].videoTitle, dat[counter].artisName, &dat[counter].view);
        counter++;
    }

    fclose(file);

    quickSort(dat, 0, counter - 1);
    
    for (int i = 0; i < counter; i++) {
        printf("%s by %s - %d\n", dat[i].videoTitle, dat[i].artisName, dat[i].view);
    }

    return 0;
}
