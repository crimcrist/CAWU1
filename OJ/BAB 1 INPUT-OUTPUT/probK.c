#include<stdio.h>

int main (){
    char N [101];
    char A [105]; 
    int U;

    scanf ("%[^\n]", N);
    scanf ("%s %d", &A, &U);
    printf ("Name: %s\n", N);
    printf ("NIS: %s\n", A);
    printf ("Age: %d\n", U);
    
return 0;
}