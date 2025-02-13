#include <stdio.h>
#include <string.h>

int main (){
	char word [105]; // "binus\0" backslash 0 menunjukan kalau ini terakhir
	int vec[10];
	int matrix [3][3];
//	scanf ("%[^\n]", word);
//	int l = strlen(word);
//	int n = 0;
//	for	(int i = 0; word [i] != '\0'; i++){
//		n++;
//	}
//	printf ("len: %d %d\n",l, n);
//	for (int i = 0; i < l ; i++){
//		printf ("%c\n", word[i]);
//		//word [i] -= 32;
//		if ('a' <= word[i] && word[i] <= 'z'){
//			word [i] -= 32;
//		}else if('A' <= word[i] && word[i] <= 'Z'){
//			word [i] += 32;
//		}
//		
//		switch (word[i]){
//			case 'i':
//			case 'I': word [i] = '!';break;
//			case 'a':
//			case 'A': word [i] = '4';break;
//			case 's':
//			case 'S': word [i] = '$';break;
//			case 'e':
//			case 'E': word [i] = '3';break;
//			case 'g':
//			case 'G': word [i] = '9';break;
//			case 'o':
//			case 'O': word [i] = '0';break;
//		}
//	}
//	
//	printf ("%d\n", 'a');
//	printf ("%s\n", word);
//	

	int A [10][10], B[10][10];
	int x, y;
	// 2 3
	// 1 2 3
	// 4 5 6
	scanf ("%d %d", &x, &y);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			scanf ("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			scanf ("%d", &B[i][j]);
		}
	}
	int C[10][10];
	for (int i = 0; i < x; i++){
		for (int j = 0; j < x; j++){
			C[i][j] = 0;
			for (int k = 0; k < y;k++) {
			C[i][j] += A[i][k]* B[k][j];
			}
			printf ("%d", C[i][j]);
		}
	}
	return 0;
}
