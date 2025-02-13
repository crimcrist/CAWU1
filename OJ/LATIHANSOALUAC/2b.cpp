#include <stdio.h>

void swap(long long int *a, long long int *b){
	long long int temp = *a;
	*a =*b;
	*b = temp;
}

int partition(long long int a[], int low, int high){
	int i = low-1;
	for(int j = low; j < high; j++){
		if(a[j]>a[high]){
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i+1], &a[high]);
	return i+1;
}

void quick(long long int a[], int low, int high){
	if(low > high) return;
	
	int pivot = partition(a, low, high);
	quick(a, pivot+1, high);
	quick(a, low, pivot-1);
}

int main(){
	int n; 
	scanf("%d", &n);
	long long int a[n+5], flag[n+5] = {0};
	long long int countTemp = 0, countMax = 0;
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
		if(a[i]%2!=0) flag[i] = 1; 
	}
	
	for(int i = 0; i < n; i++){
		if(flag[i]==1){
			countTemp++;
		}

		if(flag[i+1]==0){
			if(countTemp > countMax){
				countMax = countTemp;
				countTemp= 0;
			}
		}
	}

	printf("%d\n", countMax);
	for (int i = 0; i < n; i++){
		if (flag[i] ==  1){
			printf ("%d ", a[i])
		}
	}
	
}