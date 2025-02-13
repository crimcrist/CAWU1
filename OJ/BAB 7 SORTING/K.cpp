#include <stdio.h>

void swap(long long int *a, long long int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long int A[], long long int low, long long int high) {
    int i = low - 1;
    for (int j = low; j < high; j++) {  
        if (A[j] <= A[high]) {  
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return i + 1;
}

void quickSort(long long int A[], long long int low,long long int high) {
    if (low < high) {
        long long int pivot = partition(A, low, high);
        quickSort(A, low, pivot - 1);
        quickSort(A, pivot + 1, high);
    }
}

// void GuessTheGuest(int sums[]) {
//     quickSort(sums, 0, 24);  
//     int M1_plus_M2 = sums[0];
//     int M1_plus_M3 = sums[1];
//     int M1_plus_M4 = sums[2];
//     int M2_plus_M3 = sums[3];
//     int M2_plus_M4 = sums[4];
//     int M3_plus_M4 = sums[5];

//     int M1 = (M1_plus_M2 + M1_plus_M3 + M1_plus_M4 - (M2_plus_M3 + M2_plus_M4 + M3_plus_M4)) / 3;
//     int M2 = M1_plus_M2 - M1;
//     int M3 = M1_plus_M3 - M1;
//     int M4 = M1_plus_M4 - M1;
//     int M5 = sums[10] - M1; 

//     int result[5] = {M1, M2, M3, M4, M5};
//     for (int i = 0; i < 5; i++) {
//         if (i > 0) {
//             printf(" ");
//         }
//         printf("%d", result[i]);
//     }
//     printf("\n");
// }

long long int getC(long long int Arr[], long long int A, long long int B, int D, int E) {
    long long int quotas[] = {2, 2, 2, 2, 1, 1};
    long long int combinations[] = {A + D, A + E, B + D, B + E, B + B, D + D};
    
    for (int i = 3; i <= 21; i++) {
        for (int j = 0; j < 6; j++) {
            if (Arr[i] == combinations[j] && quotas[j] > 0) {
                Arr[i] = 0; 
                quotas[j]--; 
                break; 
            }
        }
    }

    for (int i = 21; i >= 3; i--) {
        if (Arr[i] != 0) {
            return Arr[i] - E;
        }
    }
    
    return -1;
}


int main() {
    long long int T;
    scanf("%lld", &T);
    
    for (int t = 1; t <= T; t++) {
        long long int sums[30];
        for (int i = 0; i < 25; i++) {
            scanf("%lld", &sums[i]);
        }

        quickSort (sums, 0, 24);
        printf("Case #%d: ", t);
        // GuessTheGuest(sums);
        long long int teman1 = sums[0] / 2;
        long long int teman2 = sums[1] - teman1;
        long long int teman5 = sums[24] / 2;
        long long int teman4 = sums[23] - teman5;
        long long int teman3 = getC (sums, teman1, teman2, teman4, teman5);
        printf ("%lld %lld %lld %lld %lld\n", teman1, teman2, teman3, teman4, teman5);
    }
    return 0;
}
