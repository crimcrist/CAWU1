#include <stdio.h>

int Aubah(int A, int B){
    while (A > 1) {
        if (A == B) {
            return 1;
        }
        if (A % 2 == 0) {
            A /= 2;
        } else {
            A = A * 3 + 1;
        }
    }
    return (A == B) ? 1 : 0;
}

int main (){
    int tc;
    scanf ("%d", &tc);
    for (int i = 0; i < tc; i++){
    int A, B;
    scanf ("%d %d", &A, &B);
    printf ("Case #%d: ", i+1);
    if (Aubah(A, B)){
        printf ("YES\n");
    } else {
        printf ("NO\n");
    }
    }
}