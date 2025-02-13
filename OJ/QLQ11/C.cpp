#include <stdio.h>

void specialFibo (int T){
    int fibo[1005];
	fibo[0] = 0;
	fibo[1] = 1;
	
	if(T == 1){
		printf("%d\n", fibo[0]);
		return;
	}
	if(T == 2){
		printf("%d %d\n", fibo[0], fibo[1]);
		return;
	}
	
	for (int i = 2; i < T; i++) {
        if (i % 3 == 0) {
            fibo[i] = 10;
        } else {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }
    
    for (int i = 0; i < T; i++) {
        if (i == T - 1) {
            printf("%d", fibo[i]);
        } else {
            printf("%d ", fibo[i]);
        }
    }
	
	printf("\n");

}

int main(){
	int T;
	scanf("%d", &T);
    specialFibo (T);
	return 0;
}