#include <stdio.h>

void swap (int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high; j++){
        if (arr[j] < pivot){
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i+1], &arr[high]);
    return i + 1;
}

void quicksort (int arr[], int low, int high){
    if (low < high){
        int pi = partition (arr, low, high);
        quicksort (arr, low, pi - 1);
        quicksort (arr, pi+1, high);
    }
}

int main (){
    int tc;
    scanf ("%d", &tc);
    for (int t = 0; t < tc; t++){
        int N;
        scanf ("%d", &N);
        int MMR [N + 5];
        for (int i = 0; i < N; i++){
            scanf ("%d", &MMR[i]);
        }
        quicksort (MMR, 0, N-1);
        int search;
        scanf ("%d", &search);
        printf ("CASE #%d: ",t+1);
        int found = -1;
        for (int k = 0; k < N; k++){
            if (search == MMR [k]){
                found = 1;
                if (search == MMR [N-1]){
                    printf ("%d %d\n",MMR[N-2], search);
                    break;
                }else{
                    printf ("%d %d\n", search,MMR[k+1]);
                    break;
                }
            }
        }
    if (found == -1) printf ("-1 -1\n");
    }
}