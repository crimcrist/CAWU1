#include <stdio.h>

int main(){
    char N[11];
    int O;
    char M[101];
    char C;

    scanf("%[^\n]\n", N);
    scanf("%[^\n]\n", M);
    scanf("%c %d", &C, &O);

    printf("Id    : %s\n", N);
    printf("Name  : %s\n", M);
    printf("Class : %c\n", C);
    printf("Num   : %d\n", O);

return 0;
}