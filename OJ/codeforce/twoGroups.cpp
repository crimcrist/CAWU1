#include <stdio.h>

int main (){
    int tc, N;
    int sum [105];
    scanf ("%d", &tc);
    for (int i = 0; i < tc; i++){
        int total = 0;
        scanf ("%d", &N);
        for (int j = 0; j < N; j++){
            scanf ("%d", &sum[j]);
        }
        for (int j = 0; j < N; j++){
            if (sum[j] < 0){
                total += -sum[j];
            } else{
                total += sum[j];
            }
        }

        printf ("%d\n", total);
    }
}