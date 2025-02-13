#include <stdio.h>

void printArr (int arr[]){
	for (int i = 0; i < 5; i++){
		printf ("%d ", arr[i]);
	}
	printf ("\n");
}


void intersectionSort (int arr[], int n){
	for (int i = 1; i < n ; i++){
		int curr = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > curr){
			arr[j+1] = arr [j];
			j--;
		}
		arr[j+1] = curr;
		
	}
}


int main (){
	int arr[5] = {5, 9, 1 , 4 , 2};
	printArr (arr);
	intersectionSort (arr, 5);
	printArr (arr);
}

