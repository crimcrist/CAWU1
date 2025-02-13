#include <stdio.h>

int main() {
    int T,N;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
    scanf ("%d", &N);
    printf ("Case #%d: ", i);
    if (N > 26) {
        N = 26;
    }
    for (int j = 0; j < N; j++) {
        printf("%c", 'a' + j);
    }
    
    printf("\n");
    }
    
    return 0;
}