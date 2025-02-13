#include <stdio.h>
#include <stdlib.h>

// malloc
// calloc
// realloc

int main(){
	getchar();
	int* angka = (int*)malloc(sizeof(int));
	*angka = 10;
	printf ("%d\n", *angka);
	getchar();
	int* arr = (int*)malloc(sizeof(int)*1000 * 1000 * 1000);
	for (int i = 0; i < 1000000000; i++){
		arr[i] = i;
		if (i < 1000){
			printf ("%d, ", arr[i]);
		}
	}
	printf ("\n");
	getchar();
	
	return 0;
}
