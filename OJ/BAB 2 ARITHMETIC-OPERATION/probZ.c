#include <stdio.h>

int main(){
	int A, B , C, D, T=3;
	scanf("%d", &T);
	for(int i = 0; i < 3; i++){
		scanf("%d %d %d %d", &A, &B, &C, &D);
		double a = (double) A/1;
		double b = (double) B/2;
		double c = (double) C/3;
		double d = (double) D/4;
		printf("%.2lf\n", (a*2)+(b*4)+(c*4)+(d*2));
	}
}