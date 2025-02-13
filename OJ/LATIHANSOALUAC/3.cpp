#include <stdio.h>
#include <string.h>

int hash(char x[]){
	if (strcmp(x, "S") == 0) {
		return 0;
	}
	if (strcmp(x, "M") == 0) {
		return 1;
	}
	if (strcmp(x, "L") == 0) {
		return 2;
	}
	if (strcmp(x, "XL") == 0) {
		return 3;
	}
	if (strcmp(x, "XXL") == 0) {
		return 4;
	}
}

int main(){
	int N;
	scanf("%d", &N);
	int sizes[5];
	int start[N];
	int end[N];
	for (int i = 0; i < 5; i++) {
		sizes[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		char a[6], b[6];
		scanf("%s %s", a, b);
		int sizeA, sizeB;
		sizeA = hash(a);
		sizeB = hash(b);
		for (int j = sizeA; j <= sizeB; j++) {
			sizes[j] += 1;
		}
		start[i] = sizeA;
		end[i] = sizeB;
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (sizes[i] < sizes[j]) {
				int temp = sizes[i];
				sizes[i] = sizes[j];
				sizes[j] = temp;
			}
		}
	}
	
	int sum = 0;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		sum += sizes[i];
		for (int j = 0; j < N; j++) {
			if (start[j] <= i && end[j] >= i){
				for (int k = start[j]; k <= end[j]; k++) {
					sizes[k] -= 1;
				}
			}
		}
		
		cnt++;
		if (sum >= N) {
			break;
		}
		
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (sizes[i] < sizes[j]) {
					int temp = sizes[i];
					sizes[i] = sizes[j];
					sizes[j] = temp;
				}
			}
		}
	}
	printf("%d\n", cnt);
	
	return 0;
}