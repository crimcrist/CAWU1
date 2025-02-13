#include <stdio.h>

int total (int N){
    int total = 0;
    int A;
    for (int i = 0; i < N; i++) {
        scanf ("%d", &A);
        total += A;
    }
    return total;
}

int main (){
    int T,N;
    int result = 0;
    scanf ("%d", &T);
    for (int i = 0; i < T; i++){
        scanf ("%d", &N);
        result = total(N);
        printf ("Case #%d: %d\n", i+1, result);
    }
    
}