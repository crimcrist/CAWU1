#include <stdio.h>

int notjibo(int X, int Y, int N){
    if (N == 0) return X;
    if (N == 1) return Y;
    int W;
    int count = 0;
    for (int i = 2; i <= N; i++){
        W = Y + X;
        X = Y;
        Y = W; 
    }
    return W;
}

int main (){
    int tc;
    int X, Y, N;
    scanf ("%d %d" ,&X, &Y);
    scanf ("%d", &N); 
    int result = notjibo(X, Y, N);
    printf ("%d\n",result);
    
    

}