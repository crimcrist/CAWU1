#include <stdio.h>

int main (){
    int N,paket, max = 0;
    int i,j,k;
    scanf ("%d", &N);
    int A[N];
    for (i = 1; i <= N; i++)
    {
        scanf ("%d", &A[i]);
    }
        for (j = 1; j <= N; j++)
        {
            paket = 0;
            for (k = 0; k <= N; k++){
                if (A[j] == A[k]){
                    paket++;
                }
            }    
        }
    printf ("%d\n", paket);
}
