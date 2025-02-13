#include <stdio.h>

int binarySearch(int A[], int low, int high, int target) {
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if(A[mid] == target) {
            result = mid;  
            high = mid - 1; 
        } else if (A[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result != -1) return result + 1; 
    else return -1; 
    
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int A[N + 5]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < M; i++) {
        int temp;
        scanf("%d", &temp);
        printf("%d\n", binarySearch(A, 0, N-1, temp));  // Mencetak hasil pencarian
    }

    return 0;
}
