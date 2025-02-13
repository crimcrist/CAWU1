#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen ("testdata.in", "r");
    int A, B;
    fscanf (fptr, "%d %d", &A, &B);
    int total = 0;
    total = A + B;
    printf ("%d\n", total);
    return 0;
}