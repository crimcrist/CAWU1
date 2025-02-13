#include <stdio.h>

int main (){
    int N;
    scanf ("%d", &N);
    for (int i = 2; i <= N;i++) {
    if (N % N == 0 && N % 1 == 0){
        if (i == 2){
            printf ("%d ", i);
        } else if (i % 2 != 0){
            printf ("%d ", i);
        } else if (i % 3 != 0){
            printf ("%d ", i);
        }
    }
    }
}