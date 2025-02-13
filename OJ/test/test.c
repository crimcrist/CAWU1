#include <stdio.h>

int main (){
    int a = 10;
    printf ("%d %d\n", a++, ++a);
    printf ("!a: %d\n", !a);
    printf ("!!a : %d\n", !!a);
    return 0;
}