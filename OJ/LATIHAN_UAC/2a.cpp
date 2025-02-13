#include <stdio.h>

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int arr[], int low, int high){
    int i = low - 1;
    for (int j = low; j < high; i++){
        if (arr[j] < arr[high]){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap (&arr[i+1], &arr[high]);
    return i + 1;
}

void quickSort (int arr[], int low, int high){
    if (low < high){
        int pivot = partition (arr, low, high);
        quickSort (arr,low, pivot - 1);
        quickSort (arr,pivot + 1, high);
    }
}

int main (){
    int N;
    scanf ("%d", &N);
    int A;
    for (int i = 0; i < N; i++){
        scanf ("%d", &A[i]);
    }

    quickSort (A, 0, N-1);
    int flag = 0;
    for (int i = 0; i < N; i++){
        if (A[i] == A[i+1]){
            printf ("Terdapat Duplikat\n");
            flag = 1;
            break;
        }
    }
    
    if (flag == 1){
        printf ("Tidak Terdapat Duplikat\n");
    }
    
}