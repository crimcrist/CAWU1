#include <stdio.h>

int main(){
	int T, N;
	char S [105];
	scanf ("%d", &T);
	for (int i = 1;i <= T; i++){
	scanf ("%d", &N);getchar ();
	scanf ("%[^\n]", S);getchar ();
	printf ("Case #%d: ", i);
	for (int j = 0 ;j < N; j++){
			if (S[j] >= 'a' && S [j] <= 'z'){
				putchar (S[j]);
			}
		}
	printf ("\n");
	}
return 0;
}
