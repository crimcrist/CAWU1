#include <stdio.h>

int main (){
    char c [200];
    scanf ("%[^\n]s", c);
    printf ("Congrats \"%s\" for joining the CS department at BINUS.\n", c);
    return 0;
}