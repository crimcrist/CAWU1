#include <stdio.h>
#include <string.h>

int binarySearch(char dictionary[][105], int N, char *word) {
    int left = 0, right = N - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(dictionary[mid], word);
        
        if (cmp == 0) {
            return mid;  
        } else if (cmp < 0) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    
    char dictionary[N][105];
    for (int i = 0; i < N; i++) {
        scanf("%s", dictionary[i]);
    }

    char F[100];
    scanf("%s", F);

    int index = binarySearch(dictionary, N, F);
    if (index != -1) {
        int page = (index / X) + 1;
        printf("%d\n", page);
    } else {
        printf("0\n"); 
    }

    return 0;
}
