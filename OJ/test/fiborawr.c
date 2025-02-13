#include <stdio.h>

int main (){
    int N;
    scanf ("%d", &N);
    int a, b, c;
    a = 1;
    b = 1;
    printf ("%d %d", a, b);
    for (int i = 0; i < N; i++){
        c = a + b;
        a = b;
        b = c;
        printf (" %d", c);
    }
}