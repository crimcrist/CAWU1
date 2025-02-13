#include <stdio.h>

void printArr (int arr[]){
	for (int i = 0; i < 5; i++){
		printf ("%d ", arr[i]);
	}
	printf ("\n");
}

void swap(int *a, int *b){
	int temp = *a ;
	*a = *b ;
	*b = temp;
}


void selectionSort (int arr[], int n){
	int minIdx = 0;
	for (int i = 0; i < n ; i++){
		minIdx = i;
		for (int j = i+1; j < n; j++){
			if (arr[minIdx] > arr[j]){
				minIdx = j;
			}
		}
//		int temp = arr[i];
//		arr[i] = arr[minIdx];
//		arr[minIdx] = temp;
	swap (&arr[i], &arr[minIdx]);
	}
}


int main (){
	int arr[5] = {5, 9, 1 , 4 , 2};
	printArr (arr);
	selectionSort (arr, 5);
	printArr (arr);
}

