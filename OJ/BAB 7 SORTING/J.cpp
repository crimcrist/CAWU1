#include <stdio.h>

int main (){
    int T;
    scanf ("%d", &T);
    for (int t = 0; t < T; t++){
        int N;
        scanf ("%d", &N);
        int A[N + 5];
        double total = 0;
        for (int i = 0; i < N; i++){
            scanf ("%d", &A[i]);
            total += A[i];
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N-1; j++){
                if (A[j] > A[j+1]){
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
        }

        double mean = total / N;
        double median = 0;
        if (N % 2 == 0){
            median = (A[N/2] + A[N/2 - 1]) * 0.50;
        }else {
            median = A[N/2];
        }
        printf ("Case #%d:\n", t+1);
        printf ("Mean : %.2lf\n",mean);
        printf ("Median : %.2lf\n", median);
    }
}