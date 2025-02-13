#include <stdio.h>
int count = 0;

int fibo (int n){
    count++;
    if (n == 0) return 0; 
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main (){
    int T, N;
    scanf ("%d", &T);
    int total = 0;
    for (int i = 0; i < T; i++){
        count = 0;
        scanf ("%d", &N);
        total = fibo(N);
        printf ("Case #%d: %d\n", i+1, count);
    }
return 0;
}