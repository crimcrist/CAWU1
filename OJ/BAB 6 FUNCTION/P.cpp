#include <stdio.h>

int jobbonacci (int n){
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    if (n % 2 == 1){
        return 1;
    }
    return jobbonacci(n - 1) + jobbonacci (n - 2);
}

int main (){
    int N;
    int result = 0;
    scanf ("%d", &N);
    result = jobbonacci(N);
    printf ("%d\n", result);
}