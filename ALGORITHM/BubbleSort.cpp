#include <stdio.h>



void printArr (int arr[]){
	for (int i = 0; i < 5; i++){
		printf ("%d ", arr[i]);
	}
	printf ("\n");
}

void bubbleSort (int arr[], int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - 1; j++){
			if (arr[j] > arr[j+1]){
				// melakukan swap / pertukaran
				int temp = arr [j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
//				arr[j] = arr[j+1];
//				arr[j+1] = arr[j];
			}
		printArr(arr);
		}
	}
}

int main (){
	int arr[5] = {5, 9, 1 , 4 , 2};
	printArr (arr);
	bubbleSort (arr, 5);
	printArr (arr);
}
