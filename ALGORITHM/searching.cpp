#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int linearSearch (int arr[], int n, int find){
	for (int i = 0; i < n; i++){
		if (arr[i] == find){
			return i;
		}
	}
	return -1;
}

struct data{
	int value;
	int index;
};

void bubble(struct data arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if (arr[j].value > arr[j+1].value){
                struct data temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(struct data arr[], int l, int h, int find){
    if (l > h) return -1; 
    int m = (l + h) / 2;
    if (arr[m].value == find){
        return arr[m].index;  
    } else if (find < arr[m].value){
        return binarySearch(arr, l, m - 1, find);
    } else {
        return binarySearch(arr, m + 1, h, find);
    }
}


int main (){
	struct data arr[105];
	for (int i = 0; i < 100; i++){
		arr[i].value = rand() % 1000 + 1;
		arr[i].index = i;
	}
	
	for (int i = 0; i < 100; i++){
		printf("%d ", arr[i]);
	}
	printf ("\n");
	bubble (arr,100);
	
	int q, a;
	scanf ("%d", &q);
	for	(int i = 0; i < q;i++){
		scanf ("%d", &a);
		// int idx = linearSearch(arr,100, a);
		int idx = binarySearch (arr, 0, 99, a);
		if (idx >= 0){
			printf ("Ketemu %d\n", idx + 1);
		} else {
			printf ("Tidak Ketemu\n");
		}
	}
	return 0;
}
