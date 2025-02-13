#include <stdio.h>

int main (){
    int N;
    scanf ("%d", &N);
    int A;
    int temp = 0 ;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A);
        if(temp < A){
            temp = A;
        }else if(temp >= A) {
            printf("%d ", temp);
            temp = A;
        }

        if (i == N - 1){
            printf ("%d\n", A);
        }
    }
}