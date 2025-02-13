#include <stdio.h>

int main(){
    int A, B, C;
    scanf ("%d %d %d", &A, &B, &C);
    int mobil = 0;
    while (A > 0 || B > 0 || C > 0){
        A -= 4;
        B -= 2;
        C -= 1;
        mobil++;
    }

    if (A < 0) A = -A;
    if (B < 0) B = -B;
    if (C < 0) C = -C;

    printf ("%d %d %d %d", mobil, A, B, C);
}