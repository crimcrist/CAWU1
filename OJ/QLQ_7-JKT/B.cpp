#include <stdio.h>

int jojonanci(int X, int Y, int N){
    if (N == 0) return X;
    if (N == 1) return Y;
    int W;
    for (int i = 2; i <= N; i++){
        W = Y - X;
        X = Y;
        Y = W; 
    }
    return W;
}

int main (){
    int tc;
    int X, Y, N;
    scanf ("%d", &tc);
    for (int i = 0; i < tc; i++){
        scanf ("%d %d %d", &N, &X, &Y);
        int result = jojonanci(X, Y, N);
        printf ("Case #%d: %d\n", i+1, result);
    }
    

}