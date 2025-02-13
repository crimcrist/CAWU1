#include <stdio.h>

void f(char kata[],int n,int idx , int l){
	if (idx == 1){
		kata[l] = '\0';
		printf ("%s\n", kata);
		return;
	}
	
	for (int i = 0 ; i < n; i++){
		kata [idx] = i + 'A';
		f(kata, n, idx + 1, l);
	}
}

int main (){
	int n;
	char kata [20];
	scanf ("%d", &n);
	f (kata, n, 0, n );
	return 0;
}
