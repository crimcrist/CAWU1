#include <stdio.h>

/*
5 3
1 2 3 4 5
3 -> 1 2 4 5
3 -> 1 2 5
1 -> 2 5
*/
int main (){
	int n, q, arr [105], a;
	scanf ("%d %d", &n, &q);
	for (int i = 0; i < n; i++){
		scanf ("%d", &arr[i]);
	}
	for (int i = 0; i < q; i++){
		scanf ("%d", &a);
		int idx = -1;
		for (int j = 0; j < n; j++){
			if (arr [j] == a){
				idx = j;
				break;
			}
		}
		
		if (idx >= 0){
		for (int j = idx ; j< n; j++){
			arr[j] = arr[j + 1]; 
		}
		n--;
		
		for (int j = 0; j < n; j++){
			if (j != 0){
				printf (" ");
			}
			printf ("%d",arr [j]);
		}
		printf ("\n");
    	}
		// cara ke-2
		// arr [a-1] = -1 // 1 <= ai <= 100000
	}
	
	return 0;
}
