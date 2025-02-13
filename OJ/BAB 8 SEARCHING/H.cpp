#include <stdio.h>

void swap(long long int *a, long long int *b){
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long int arr[], int low, int high){
    long long int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++){ 
        if (arr[j] <= pivot){  
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(long long int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high); 
    }
}

int main(){
    long long int N; 
    scanf("%lld", &N);

    long long int X[N]; 
    for (int i = 0; i < N; i++){
        scanf("%lld", &X[i]);
    }

    quicksort(X, 0, N - 1);

    long long int Y; 
    scanf("%lld", &Y);
    long long int count = 0; 
    for (int i = 0; i < N; i++){
        if (Y >= X[i]){
            count++;
            Y -= X[i]; 
        }
    }

    printf("%lld\n", count); 

    return 0;
}
