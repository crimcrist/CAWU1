#include <stdio.h>

int main (){
    FILE *ftpr;
    ftpr = fopen ("testdata.in", "r");
    int A, B;
    fscanf (ftpr, "%d %d\n", &A, &B);
    printf ("%d", A+B);
    return 0;
}