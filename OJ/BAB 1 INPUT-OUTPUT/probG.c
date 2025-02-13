#include <stdio.h>

int main (){
    char s [200];
    scanf ("%[^\n]s" , s);
    printf ("Happy Birthday to %s.\n", s);
    return 0;
}