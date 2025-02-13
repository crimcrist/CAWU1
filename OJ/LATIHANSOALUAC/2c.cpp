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
	long long int a[n+5];
	long long int freq[n+5] = {0}, countMax = 0, index;
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	for(int i = 0; i < n; i++){
		freq[a[i]]++;
	}
	for(int i = 0; i < n-1; i++){
		if(freq[a[i]]>countMax){
			countMax = freq[a[i]];
			index = i;
		}
	}
	printf("%lld: karena angka %lld ada %lld duplikat\n", a[index], a[index], countMax);
}